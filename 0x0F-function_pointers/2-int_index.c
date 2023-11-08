#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: the array to search
 * @size: the size of the array
 * @cmp: a pointer to the comparison function
 *
 * Return: the index of the first element for which the comparison function
 * does not return 0, -1 if no element matches or if size <= 0
 *
 * Description:
 * This searches for an integer in an array using a comparison
 * function.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}

