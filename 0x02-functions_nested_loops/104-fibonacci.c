#include <unistd.h>

/**
 * main - Entry point
 *
 * Description: Computes and prints the first 98 Fibonacci numbers
 * separated by a comma and a space, followed by a new line.
 *
 * Return: Always 0
 */
int main(void)
{
	unsigned int a = 1, b = 2, next;
	int count = 2;  /* We've already got the first two numbers */

	write(1, "1, 2, ", 6);

	while (count < 98)
	{
		next = a + b;
		a = b;
		b = next;
		write(1, &next, 1);

		if (count < 97)
		{
			write(1, ", ", 2);
		}
		else
		{
			write(1, "\n", 1);
		}

		count++;
	}

	return (0);
}
