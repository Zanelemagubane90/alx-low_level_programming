#include "main.h"

/**
 *get_bit - returns the value of a bit at a given
 *index.
 *@n: unsigned long int input.
 *@index: index of the bit.
 *
 *Return: value of the bit.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int num_int;

	if ((n == 0) && (index < 64))
		return (0);

	for (num_int = 0; num_int <= 63; n >>= 1, num_int++)
	{
		if (index == num_int)
		{
			return (n & 1);
		}
	}

	return (-1);
}
