#include "main.h"

/**
 * append_text_to_file -  appends text at the end of a file.
 * @filename: filename
 * @text content:  NULL terminated string to add at the end of the file
 * Return: 1 on success, -1 on fail
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, chars_appended, str_len = 0;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (text_content)
	{
		while (text_content[str_len])
			str_len++;
		chars_appended = write(fd, text_content, str_len);
		if (chars_appended != str_len)
			return (-1);
	}
	close(fd);
	return (1);
}
