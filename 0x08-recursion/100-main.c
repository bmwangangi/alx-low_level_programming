#include "main.h"
#include <stdio.h>

/**
 *  * is_palindrome - Function to check if a string is a palindrome.
 *   * @str: The string to check.
 *    * Return: 1 if it's a palindrome, 0 otherwise.
 *     */
int is_palindrome(char *str);

int main(void)
{
	    int r;

	        r = is_palindrome("level");
		    printf("%d\n", r);

		        r = is_palindrome("redder");
			    printf("%d\n", r);

			        r = is_palindrome("test");
				    printf("%d\n", r);

				        r = is_palindrome("step on no pets");
					    printf("%d\n", r);

					        return (0);
}
