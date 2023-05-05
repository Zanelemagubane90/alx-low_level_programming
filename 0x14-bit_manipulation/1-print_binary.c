#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @np: the number to print in binary
 *
 * Description: This function takes an unsigned long integer and prints its
 * binary representation. It does this by first creating a msk to check the
 * leftmost bit, then looping through each bit in the number and printing '1'
 * if the bit is set and '0' if it is not set. If the number is zero, it prints
 * a single '0'. The function does not return a value.
 */
void print_binary(unsigned long int np)
{
	unsigned long int msk = 1UL << (sizeof(unsigned long int) * 8 - one);
	int find_first_bit = zero;

	while (msk > zero)
	{
		if (np & msk)
		{
			find_first_bit = one;
			_putchar('1');
		}
		else if (find_first_bit)
		{
			_putchar('0');
		}
		msk >>= one;
	}

	if (!find_first_bit)
	{
		_putchar('0');
	}
}

