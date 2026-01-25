#include "main.h"
#include <stdio.h>

/**
 * error_98 - handles read errors
 * @file: filename
 */
void error_98(char *file)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file);
exit(98);
}

/**
 * error_99 - handles write errors
 * @file: filename
 */
void error_99(char *file)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
exit(99);
}

/**
 * error_100 - handles close errors
 * @fd: file descriptor
 */
void error_100(int fd)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
exit(100);
}

/**
 * main - copies the content of a file to another file
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
int fd_from, fd_to;
ssize_t n_read, n_wrote;
char buffer[1024];

if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}
fd_from = open(argv[1], O_RDONLY);
if (fd_from == -1)
error_98(argv[1]);
fd_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
if (fd_to == -1)
error_99(argv[2]);
while ((n_read = read(fd_from, buffer, 1024)) > 0)
{
n_wrote = write(fd_to, buffer, n_read);
if (n_wrote == -1)
error_99(argv[2]);
}
if (n_read == -1)
error_98(argv[1]);
if (close(fd_from) == -1)
error_100(fd_from);
if (close(fd_to) == -1)
error_100(fd_to);
return (0);
}
