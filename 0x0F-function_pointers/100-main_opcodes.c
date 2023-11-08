#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the opcodes of its own main function.
 * @argc: number of arguments.
 * @argv: array of arguments.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int nbytes, i;
	char *main_addr = (char *)main;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	nbytes = atoi(argv[1]);
	if (nbytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	for (i = 0; i < nbytes; i++)
	{
		printf("%02hhx", main_addr[i]);
		if (i < nbytes - 1)
			printf(" ");
		else
			printf("\n");
	}
	return (0);
}

