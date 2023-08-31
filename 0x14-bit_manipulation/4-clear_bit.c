#include "main.h"

/**
 * clear_bit - sets the value of a given bit to 0
 * @n: point to the number to change
 * @index: index of the bit to clear
 * Return: 1(success), -1(success)
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
