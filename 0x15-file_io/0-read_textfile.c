#include "main.h"
#include <stdlib.h>
/**
 * Write a function that reads a text file and prints it to the POSIX standard output
 * this code reads text file and prints it to stdout
 * if filename is NULL return 0
 * if the file can not be opened or read, return 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int find, x;
	char *buf;
	ssize_t count;

	if (filename == NULL || letters == 0)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);

	find = open(filename, O_RDONLY);
	if (find == -1)
	{
		free(buf);
		return (0);
	}

	x = read(find, buf, letters);
	if (x == -1)
	{
		close(find);
		free(buf);
		return (0);
	}

	close(find);

	count = write(STDOUT_FILENO, buf, x);
	if (count == -1)
	{
		free(buf);
		return (0);
	}

	free(buf);
	return (count);
}
