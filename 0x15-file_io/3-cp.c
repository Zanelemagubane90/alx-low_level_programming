#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 *main - program that copies the content of a file to another file
 *@argc: num argument
 *@argv: string argument
 *Return: 0
 */

int main(int argc, char *argv[])
{
	int one = 1024, int_checker = -1, two = 0, int_from, int_t;
	char buffer[1024];

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp int_from int_t\n"), exit(97);
	int_from = open(argv[1], O_RDONLY);
	if (int_from == int_checker)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	int_t = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	if (int_t == int_checker)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		close(int_from), exit(99);
	}

	while (one == 1024)
	{
		one = read(int_from, buffer, 1024);
		if (one == int_checker)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}

		two = write(int_t, buffer, one);
		if (two < one)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	}

	if (close(int_from) == int_checker)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", int_from), exit(100);

	if (close(int_t) == int_checker)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", int_t), exit(100);

	return (0);
}
