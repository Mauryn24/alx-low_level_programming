#include "main.h"

/**
 * read_textfile - reads a text file and
 * prints it to the POSIX standard output.
 * @filename: name of the text file to read
 * @letters: maximum number of bytes to read from the file.
 * Return: number of bytes read
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, chars_read, chars_written;
	char *buf;

	if (filename == NULL)
		return (0);
	fd = open("filename", 0_RDONLY);
	if (fd == -1)
		return (0);
	/*memory allocation*/
	buf = malloc(sizeof(char) * letters);

	/*if memory allocation fails, return 0*/
	if (buf == NULL)
		return (0);
	chars_read = read(fd, buf, letters);
	/* If read returns -1, close the file descriptor and*/
	/*free the buffer, and return -0 from the function.*/
	if (chars_read == -1)
		return (0);
	/*We use the write system call to write the contents*/
	/*of the buffer to the standard output.*/
	chars_written = write(STDOUT_FILENO, buf, chars_read);
	if (chars_written == -1)
		return (0);
	close(fd);
	free(buf);
	return (chars_written);
}
