#include "main.h"

/**
 * set_bit - set a bit to a given index to 1
 * @n: point to the number to be changed
 * @index: index of the bit to be set to 1
 * Return: 1(success), -1(failure)
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
