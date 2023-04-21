#include "main.h"
/**
 * Write a function that appends text at the end of a file.
 * this code appends text to a file
 * Return: 1 on success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content);
{
	size_t m;

	for (m = 0; str[m]; m++)
		;
	return (m);
}


int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t len;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
		len = write(fd, text_content, _strlen(text_content));
	close(fd);
	if (len == -1)
		return (-1);
	return (1);
}
