#include "main.h"

/**
 * get_endianness - Checks the endianness of the system.
 *
 * Return: 0 if big endian, 1 if little endian.
 */
int get_endianness(void)
{
	int sample_number = 1;
	char *byte_pointer = (char *)&sample_number;

	return (*byte_pointer);
}

