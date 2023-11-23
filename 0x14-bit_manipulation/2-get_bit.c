#include "main.h"

/**
 * get_bit - Returns the value of a bit at a given index.
 * @num: The number to check bits in.
 * @idx: The index at which to check the bit.
 *
 * Return: The value of the bit, or -1 if there is an error.
 */
int get_bit(unsigned long int num, unsigned int idx)
{
	unsigned long int divisor, bit_check;

	if (idx > (sizeof(unsigned long int) * 8 - 1))
		return (-1);

	divisor = 1 << idx;
	bit_check = num & divisor;

	if (bit_check == divisor)
		return (1);

	return (0);
}

