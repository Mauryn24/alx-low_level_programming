#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * main- copies contents of a file
 * @argc: arguement counter
 * @argv: arguement vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int fd1, fd2, chars_read, chars_written, file_closed, file2_closed;
	char *buf[1024];

	/*3 arg taken ie source file, destination file and buffer size*/
	if (argc != 3)
	{
		/*exit 97 indicates that wrong number of arguements*/
		dprintf(STDERR_FILENO, "usage: cp file_from file_to\n");
		exit(97);
	}
	/*open 1st file with read only permissions*/
	fd1 = open(argv[1], O_RDONLY, 0);
	if (fd1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't read from file %s\n", argv[1]);
		/*exit 98 - file couldnot be read*/
		exit(98);
	}
	/*open 2nd file with write only permissions*/
	fd2 = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
	if (fd2 == -1)
	{
		/*exit 99 - could not write*/
		dprintf(STDERR_FILENO, "Error: can't write to %s\n", argv[2]);
		 exit(99);
	}
	/*The program reads 1024 bytes at a time from the first file and*/
	/*writes them to the second file until there is nothing left to read.*/
	while ((chars_read = read(fd1, buf, 1024)) > 0)
	{
		chars_written = write(fd2, buf, chars_read);
		if (chars_written != chars_read)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			 exit(99);
		}
	}
	if (chars_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't read from file %s\n", argv[1]);
		exit(98);
	}
	file_closed = close(fd1);
	if (file_closed != 0)
		/*exit 100 - could not close the fd*/
		dprintf(STDERR_FILENO, "Error: can't close fd %d\n", fd1), exit(100);
	file2_closed = close(fd2);
	if (file2_closed != 0)
		dprintf(STDERR_FILENO, "Error: can't close fd %d\n", fd1), exit(100);
	return (0);
}
