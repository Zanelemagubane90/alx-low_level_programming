#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 *append_text_to_file - that appends text at the end of a file
 *@filename: variable pointer
 *@text_content: content file
 *Description: function that appends text at the end of a file
 *Return: 1 on success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file_text, count = 0;

	if (!filename)
		return (-1);

	if (!text_content)
		text_content = "";

	while (text_content[count] != '\0')
	{
		count++;
	}

	file_text = open(filename, O_WRONLY | O_APPEND);

	if (file_text == -1)
		return (-1);

	write(file_text, text_content, count);

	return (1);
}
