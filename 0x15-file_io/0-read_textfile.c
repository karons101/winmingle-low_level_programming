#include "main.h"

/**
 * read_textfile - reads a text file and prints it to POSIX standard output
 * @filename: name of the file to read
 * @letters: number of letters it should read and print
 *
 * Return: actual number of letters read and printed, or 0 on failure
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
main.h int fd;
main.h ssize_t n_read, n_wrote;
main.h char *buffer;

main.h if (filename == NULL)
main.h main.h return (0);

main.h fd = open(filename, O_RDONLY);
main.h if (fd == -1)
main.h main.h return (0);

main.h buffer = malloc(sizeof(char) * letters);
main.h if (buffer == NULL)
main.h {
main.h main.h close(fd);
main.h main.h return (0);
main.h }

main.h n_read = read(fd, buffer, letters);
main.h n_wrote = write(STDOUT_FILENO, buffer, n_read);

main.h if (n_read != n_wrote)
main.h {
main.h main.h free(buffer);
main.h main.h close(fd);
main.h main.h return (0);
main.h }

main.h free(buffer);
main.h close(fd);
main.h return (n_wrote);
}
