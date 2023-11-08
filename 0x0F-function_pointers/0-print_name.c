#include <stdio.h>

/**
 * print_string - Prints a string to the standard output.
 * @str: Pointer to the string to be printed.
 */
void print_string(char *str)
{
	printf("%s\n", str);
}

/**
 * print_name - Prints the given name using a provided function pointer.
 * @name: Pointer to the name to be printed.
 * @f: Function pointer to the function that prints the name.
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}

/**
 * main - Entry point of the program.
 *
 * Return: Always 0.
 */
int main(void)
{
	char *name = "John Doe";

	print_name(name, print_string);
	return (0);
}
