#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - prints a name using a pointer to a function
 * @name: the string to print
 * @f: a pointer to the function that prints the name
 *
 * Description:
 * This function a string and a function pointer as arguments and prints
 * the name using the function.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
