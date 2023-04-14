#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 *read_textfile -  reads a text file and prints it to the POSIX standard output
 *@filename: variable pointer | if filename is NULL return 0
 *@letters: letters size
 *Description: Write a function that reads a text file and prints it
 *to the POSIX standard output.
 *Return: the actual number of letters it could read and print, 0 otherwise
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t a_textfile, lt, writer;
	char *content;

	content = malloc(letters);
	if (content == NULL || filename == NULL)
		return (0);

	a_textfile = open(filename, O_RDONLY);

	if (a_textfile == -1)
	{
		free(content);
		return (0);
	}

	lt = read(a_textfile, content, letters);

	writer = write(STDOUT_FILENO, content, lt);

	close(a_textfile);

	return (writer);
}
