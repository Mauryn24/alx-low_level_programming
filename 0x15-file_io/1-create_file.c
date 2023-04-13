#include "main.h"

/**
 * create_file - a function that creates a file
 * @filename: name of file to be created
 * @text_content: a NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, chars_written, str_len = 0;

	if (filename == NULL)
		return (-1);
	fd = open(filename,  O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	/*if text content is not NULL*/
	if (text_content != NULL)
	{
		/*calculate length using a while loop*/
		while (text_content[str_len])
			str_len++;
		/*fd returned by open() is used to write contents*/
		/*of text_content string to the file*/
		chars_written = write(fd, text_content, str_len);
		/*if no of cars written to the file is not equal to*/
		/*length of string return -1 to indicate error in file creation*/
		if (chars_written != str_len)
			return (-1);
	}
	close(fd);
	return (1);
}
