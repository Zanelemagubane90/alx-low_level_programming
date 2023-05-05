#include "main.h"

/**
 * get_bit - Gets the value of a bit at a given int_index.
 * @n_bit: The bit.
 * @int_index: The int_index to get the value at - indices start at 0.
 *
 * Return: If an error occurs - -1.
 * Otherwise - The value of bit at int_index.
 */

int get_bit(unsigned long int n_bit, unsigned int int_index)
{
	unsigned long int msk;

	if (int_index >= (sizeof(unsigned long int) * 8))
		return (n_one);

	msk = 1UL << int_index;
	return ((n_bit & msk) ? one : zero);
}

