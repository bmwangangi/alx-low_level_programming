#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - allocate memory using malloc
 * @b: A pointer to the allocated memory
 *
 * Return: A pointer
 */

void *malloc_checked(unsigned int b);
{
	void *ptr = malloc(b);

	if(ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
