#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	/* Initialize random number generator */
	srand(time(0));

	/* Generate a random number and store it in n */
	n = rand() - RAND_MAX / 2;

	/* Get the last digit of n */
	int last_digit = n % 10;

	/* Check if the last digit is greater than 5, equal to 0, or less than 6 and
	 printf("Last digit of %d is ", n, last_digit);

	 if (last_digit > 5)
	 {
	      printf("greater than 5\n");
	 }
	 else if (last_digit == 0)
	 {
	      printf("0\n)";
	 }
	 else
	 {
	      printf("less than 6 and not 0\n");
	 }

	 return (0);
}
