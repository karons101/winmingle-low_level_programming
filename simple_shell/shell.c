#include "main.h"

/**
 * Global/Static storage
 */
static int last_exit_status = 0;
static alias_t aliases[100];
static int alias_count = 0;

/**
 * _strchr - Locates a character in a string.
 */
char *_strchr(const char *s, int c)
{
	while (*s != '\0')
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if ((char)c == '\0')
		return ((char *)s);
	return (NULL);
}

/**
 * _strtok - Custom string tokenizer.
 */
char *_strtok(char *str, const char *delim)
{
	static char *next_token;
	char *token_start;

	if (str != NULL)
		next_token = str;
	if (next_token == NULL || *next_token == '\0')
		return (NULL);
	while (*next_token && _strchr(delim, *next_token))
		next_token++;
	if (*next_token == '\0')
		return (NULL);
	token_start = next_token;
	while (*next_token && !_strchr(delim, *next_token))
		next_token++;
	if (*next_token)
	{
		*next_token = '\0';
		next_token++;
	}
	return (token_start);
}

/**
 * replace_vars - Replaces $? and $$ in a string token
 */
char *replace_vars(char *token)
{
	char pid_buf[20], status_buf[20];

	if (strcmp(token, "$?") == 0)
	{
		sprintf(status_buf, "%d", last_exit_status);
		return (strdup(status_buf));
	}
	if (strcmp(token, "$$") == 0)
	{
		sprintf(pid_buf, "%d", (int)getpid());
		return (strdup(pid_buf));
	}
	return (strdup(token));
}

/**
 * get_path - Finds command in PATH.
 */
char *get_path(char *command)
{
	char *path, *path_copy, *token, *file_path;
	struct stat st;

	if (!command || *command == '\0') return (NULL);
	if (_strchr(command, '/') != NULL)
	{
		if (stat(command, &st) == 0) return (strdup(command));
		return (NULL);
	}
	path = getenv("PATH");
	if (path)
	{
		path_copy = strdup(path);
		token = _strtok(path_copy, ":");
		while (token != NULL)
		{
			file_path = malloc(strlen(token) + strlen(command) + 2);
			if (file_path)
			{
				strcpy(file_path, token);
				strcat(file_path, "/");
				strcat(file_path, command);
				if (stat(file_path, &st) == 0)
				{
					free(path_copy);
					return (file_path);
				}
				free(file_path);
			}
			token = _strtok(NULL, ":");
		}
		free(path_copy);
	}
	return (NULL);
}

/**
 * print_alias - Prints a single alias
 */
void print_alias(alias_t a)
{
	write(STDOUT_FILENO, a.name, strlen(a.name));
	write(STDOUT_FILENO, "='", 2);
	write(STDOUT_FILENO, a.value, strlen(a.value));
	write(STDOUT_FILENO, "'\n", 2);
}

/**
 * handle_alias - Alias builtin
 */
int handle_alias(char **args)
{
	int i, j;
	char *name, *value;

	if (args[1] == NULL)
	{
		for (i = 0; i < alias_count; i++)
			print_alias(aliases[i]);
		return (0);
	}
	for (i = 1; args[i]; i++)
	{
		value = _strchr(args[i], '=');
		if (value)
		{
			*value = '\0';
			name = args[i];
			value++;
			for (j = 0; j < alias_count; j++)
			{
				if (strcmp(aliases[j].name, name) == 0)
				{
					free(aliases[j].value);
					aliases[j].value = strdup(value);
					break;
				}
			}
			if (j == alias_count && alias_count < 100)
			{
				aliases[alias_count].name = strdup(name);
				aliases[alias_count].value = strdup(value);
				alias_count++;
			}
		}
		else
		{
			for (j = 0; j < alias_count; j++)
				if (strcmp(aliases[j].name, args[i]) == 0)
					print_alias(aliases[j]);
		}
	}
	return (0);
}

/**
 * handle_cmd - Parses and executes a single command string
 */
int handle_cmd(char *line)
{
	pid_t pid;
	char *args[1024], *full_path, *token;
	int status, i = 0, j;

	for (j = 0; line[j]; j++)
	{
		if (line[j] == '#' && (j == 0 || line[j - 1] == ' '))
		{
			line[j] = '\0';
			break;
		}
	}

	token = _strtok(line, " \n\t\r");
	while (token != NULL && i < 1023)
	{
		args[i++] = replace_vars(token);
		token = _strtok(NULL, " \n\t\r");
	}
	args[i] = NULL;
	if (args[0] == NULL) return (0);

	if (strcmp(args[0], "exit") == 0)
	{
		int exit_val = args[1] ? atoi(args[1]) : last_exit_status;
		for (j = 0; j < i; j++) free(args[j]);
		exit(exit_val);
	}
	if (strcmp(args[0], "alias") == 0)
	{
		status = handle_alias(args);
		for (j = 0; j < i; j++) free(args[j]);
		return (status);
	}

	full_path = get_path(args[0]);
	if (full_path == NULL)
	{
		fprintf(stderr, "./hsh: 1: %s: not found\n", args[0]);
		for (j = 0; j < i; j++) free(args[j]);
		return (127);
	}

	pid = fork();
	if (pid == 0)
	{
		if (execve(full_path, args, environ) == -1)
		{
			perror("./hsh");
			exit(EXIT_FAILURE);
		}
	}
	else
	{
		wait(&status);
		free(full_path);
		for (j = 0; j < i; j++) free(args[j]);
		if (WIFEXITED(status))
			return (WEXITSTATUS(status));
	}
	return (0);
}

/**
 * main - Entry point for the shell
 */
int main(int argc, char **argv)
{
	char *line = NULL;
	size_t len = 0;
	FILE *input_stream = stdin;

	if (argc == 2)
	{
		input_stream = fopen(argv[1], "r");
		if (input_stream == NULL)
		{
			fprintf(stderr, "%s: 0: Can't open %s\n", argv[0], argv[1]);
			exit(127);
		}
	}

	while (1)
	{
		if (isatty(STDIN_FILENO) && argc == 1)
			write(STDOUT_FILENO, "($) ", 4);

		if (getline(&line, &len, input_stream) == -1)
		{
			if (isatty(STDIN_FILENO) && argc == 1)
				write(STDOUT_FILENO, "\n", 1);
			free(line);
			if (argc == 2) fclose(input_stream);
			exit(last_exit_status);
		}
		last_exit_status = handle_cmd(line);
	}
	return (0);
}
