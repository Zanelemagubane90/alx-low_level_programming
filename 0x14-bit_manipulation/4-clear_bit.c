#include "main.h"

/**
 * clear_bit - Sets the value of a bit at a given int_index to 0.
 * @n: A pointer to the bit.
 * @int_index: The int_index to set the value at - indices start at 0.
 *
 * Return: If an error occurs - -1.
 * Otherwise - 1.
 */
int clear_bit(unsigned long int *np, unsigned int int_index)
{
	if (int_index >= (sizeof(unsigned long int) * 8))
		return (n_one);

	*np &= ~(1UL << int_index);

	return (one);
}

