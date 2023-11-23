#include "main.h"
#include <stdlib.h>

/**
 * clear_bit - Sets the value of a bit to 0 at a given index.
 * @num: A pointer to the number to clear the bit in.
 * @idx: The index at which to clear the bit.
 *
 * Return: 1 if successful, or -1 if an error occurred.
 */
int clear_bit(unsigned long int *num, unsigned int idx)
{
	if (idx > sizeof(*num) * 8)
		return (-1);

	*num &= ~(1 << idx);

	return (1);
}

