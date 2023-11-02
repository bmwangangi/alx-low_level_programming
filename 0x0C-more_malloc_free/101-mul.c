#include <stdio.h>
#include <stdlib.h>

/**
 * is_digit - checks if a string contains only digits
 * @str: the string to check
 *
 * Return: 1 if all characters are digits, 0 otherwise
 */
int is_digit(char *str)
{
	while (*str)
	{
		if (*str < '0' || *str > '9')
			return (0);
		str++;
	}
	return (1);
}

/**
 * print_error - prints an error message and exits with a status of 98
 */
void print_error(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * main - multiplies two positive numbers
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 on success, 98 on failure
 */
int main(int argc, char *argv[])
{
	unsigned long int num1, num2, result;

	if (argc != 3 || !is_digit(argv[1]) || !is_digit(argv[2]))
		print_error();

	num1 = atol(argv[1]);
	num2 = atol(argv[2]);
	result = num1 * num2;
	printf("%lu\n", result);

	return (0);
}
