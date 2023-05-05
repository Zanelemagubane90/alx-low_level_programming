#include <stddef.h>
#include <string.h>
#include "main.h"

/**
 * binary_to_uint - converts a binary to an unsigned int
 * @bn: the binary number as a string
 *
 * Return: the converted value
 */
unsigned int binary_to_uint(const char *bn)
{
	unsigned int result = zero;
	size_t len, i;

	if (bn == NULL)
		return (zero);

	len = strlen(bn);
	for (i = zero; i < len; i++)
	{
		if (bn[i] != '0' && bn[i] != '1')
			return (zero);
		result = (result << one) | (bn[i] - '0');
	}

	return (result);
}

