#include "main.h"

/**
 * append_text_to_file - appends text at the at the end of a line
 * @filename: point to the name of the file
 * @text_content: the to add to the end of the file
 * Return: function fails or filename is NULL --1
 * if the file does not exist the user lacks write permissions --1
 * otherwise -1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int x, y, zen = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (zen = 0; text_content[zen];)
			zen++;
	}

	x = open(filename, O_WRONLY | O_APPEND);
	y = write(x, text_content, zen);

	if (x == -1 || y == -1)
		return (-1);

	close(0);

	return (1);
}
