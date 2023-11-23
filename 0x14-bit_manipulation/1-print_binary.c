#include "main.h"

/**
 * _pow - Calculates the power of a number.
 * @base: The base of the exponent.
 * @power: The power of the exponent.
 *
 * Return: The result of base raised to the power.
 */
unsigned long int _pow(unsigned int base, unsigned int power)
{
	unsigned long int result = 1;
	unsigned int exponent;

	for (exponent = 1; exponent <= power; exponent++)
		result *= base;

	return (result);
}

/**
 * print_binary - Prints a number in binary notation.
 * @n: The number to print in binary.
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int divisor, check;
	char flag = 0;

	divisor = _pow(2, sizeof(unsigned long int) * 8 - 1);

	while (divisor != 0)
	{
		check = n & divisor;

		if (check == divisor)
		{
			flag = 1;
			_putchar('1');
		}
		else if (flag == 1 || divisor == 1)
		{
			_putchar('0');
		}

		divisor >>= 1;
	}
}

