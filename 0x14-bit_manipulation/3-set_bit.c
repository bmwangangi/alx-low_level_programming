#include "main.h"

/**
 * set_bit - Sets the value of a bit to 1 at a given index.
 * @num: A pointer to the number to set the bit in.
 * @idx: The index at which to set the bit.
 *
 * Return: 1 if successful, or -1 if an error occurred.
 */
int set_bit(unsigned long int *num, unsigned int idx)
{
	unsigned long int set_bit_mask;

	if (idx > (sizeof(unsigned long int) * 8 - 1))
		return (-1);

	set_bit_mask = 1 << idx;
	*num = *num | set_bit_mask;

	return (1);
}

