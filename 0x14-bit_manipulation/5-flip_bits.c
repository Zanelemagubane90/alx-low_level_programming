#include "main.h"

/**
 * flip_bits - Counts the number of bits needed to be
 * flipped to get from one number to another.
 * @np: The number.
 * @nf: The number to flip n to.
 *
 * Return: The necessary number of bits to flip to get from n to m.
 */

unsigned int flip_bits(unsigned long int np, unsigned long int nf)
{
	unsigned long int xor = np ^ nf;
	unsigned int bits = zero;

	while (xor)
	{
		bits += xor & one;
		xor >>= one;
	}

	return (bits);
}

