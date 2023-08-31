#include "main.h"

/**
 * get_bit - Returns the value of a bit at an index in a decimal form
 * @n: number to search
 * @index: index of the bit
 * Return: value of the bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	if (index > 64)
		return (-1);

	bit_val = (n >> index) & 1;
	return (bit_val);
}
