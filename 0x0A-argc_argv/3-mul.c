#include <stdio.h>
#include <stdlib.h>

/**
 * main - mutiplies two numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 on success, 1 on error
 */

int main(int argc, char *argv[])
{
	int a, b;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	a = atoi(argv[1]);
	a = atoi(argv[2]);

	if (a == 0 || b == 0)
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", a * b);
	return (0);
}
