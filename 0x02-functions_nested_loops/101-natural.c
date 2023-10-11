#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry point
 *
 * Description: Computes and prints the sum of multiples of 3 or 5 below 1024
 *
 * Return: Always 0
 */
int main(void)
{
	int sum = 0;
	int i;
	char buffer[16];
	int len = 0;
	int j;

	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum += i;
		}
	}

	while (sum > 0)
	{
		buffer[len] = (sum % 10) + '0';
		sum /= 10;
		len++;
	}

	if (len == 0)
	{
		buffer[0] = '0';
		len = 1;
	}

	for (j = len - 1; j >= 0; j--)
	{
		write(1, &buffer[j], 1);
	}

	write(1, "\n", 1);

	return (0);
}

