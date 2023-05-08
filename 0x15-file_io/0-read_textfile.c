#include "main.h"

/**
 * read_textfile - t reads a text file and
 * prints it to the POSIX standard output.
 * @filename: pointer to file to be read from
 * @letters: letters to be printed
 * Return: the actual number of letters it could read and print
 * or 0 on failure
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, chars_read, chars_written;
	char *b;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	b = malloc(sizeof(char) * letters);
	if (b == NULL)
		return (0);
	chars_read = read(fd, b, letters);
	if (chars_read == -1)
		return (0);
	chars_written = write(STDOUT_FILENO, b, chars_read);
	if (chars_written == -1)
		return (0);
	close(fd);
	free(b);
	return (chars_written);
}
