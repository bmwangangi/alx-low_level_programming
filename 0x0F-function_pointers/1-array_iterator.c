#include <stdio.h>

/**
 * array_iterator - Executes a function on each element of an array.
 * @array: Pointer to the array.
 * @size: The size of the array.
 * @action: Pointer to the function to be executed on each array element.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}

/**
 * print_element - Prints an integer element.
 * @n: The integer element to be printed.
 */
void print_element(int n)
{
	printf("%d\n", n);
}

/**
 * main - Entry point of the program.
 *
 * Return: Always 0.
 */
int main(void)
{
	int array[] = {1, 2, 3, 4, 5};
	size_t size = sizeof(array) / sizeof(array[0]);

	/* Example call to array_iterator */
	array_iterator(array, size, print_element);

	return (0);
}
