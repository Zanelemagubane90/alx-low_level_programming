#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 *create_file - function that creates a file.
 *@filename: variable pointer
 *@text_content: content file
 *Description: Create a function that creates a file.
 *Return: -1 on failure, 1 on success
 */

int create_file(const char *filename, char *text_content)
{
	int file_int, int_count = 0;

	if (!filename)
		return (-1);

	if (!text_content)
		text_content = "";

	while (text_content[int_count] != '\0')
	{
		int_count++;
	}

	file_int = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (file_int == -1)
		return (-1);

	write(file_int, text_content, int_count);

	return (1);
}
