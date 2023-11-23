#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: A pointer to a string containing a binary number.
 *
 * Return: The decimal value of the binary number, or 0 if an error occurs.
 */
unsigned int binary_to_uint(const char *b)
{
	int index;
	unsigned int decimal = 0;

	if (!b)
		return (0);

	/* Check if the string contains only '0' and '1' characters */
	for (index = 0; b[index] != '\0'; index++)
	{
		if (b[index] != '0' && b[index] != '1')
			return (0);
	}

	/* Convert binary to decimal */
	for (index = 0; b[index] != '\0'; index++)
	{
		decimal <<= 1;

		if (b[index] == '1')
			decimal += 1;
	}

	return (decimal);
}

