#include "main.h"

/**
 * create_file - creates files
 * @filename: point to the name of the file to make
 * @text_content: point to a string to write to the file
 * Return: if function fail (--1), otherwise (-1)
 */

int create_file(const char *filename, char *text_content)
{
	int fd, m, ken = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (ken = 0; text_content[ken];)
			ken++;
	}

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	m = write(fd, text_content, ken);

	if (fd == -1 || m == -1)
		return (-1);

	close(fd);

	return (1);
}
