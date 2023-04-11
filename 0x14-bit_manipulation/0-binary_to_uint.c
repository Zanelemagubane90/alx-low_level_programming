#include "main.h"

/**
 *binary_to_uint - program converts a binary number to an
 *unsigned int.
 *@b: binary.
 *
 *Return: unsigned int.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int unsigned_int;
	int length_int, base_int;

	unsigned_int = 0;

	if (!b)
		return (0);

	for (length_int = 0; b[length_int] != '\0'; length_int++)
	;

	for (length_int--, base_int = 1; length_int >= 0; length_int--, base_int *= 2)
	{
		if ((b[length_int] != '0') && (b[length_int] != '1'))
		{
			return (0);
		}

		if (b[length_int] & 1)
		{
			unsigned_int += base_int;
		}
	}

	return (unsigned_int);
}
