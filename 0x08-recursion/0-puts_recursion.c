#include <stdio.h>
/**
 * _puts_recursion - Prints a string using recursion
 *
 * @s: The string to be printed
 *
 * Description:
 * This function recursively prints the characters of the string @s until it reaches the null terminator
 */



void _puts_recursion(char *s)
{
	    if (*s == '\0')
		        {
				        putchar('\n');
					        return;
						    }

	        putchar(*s);
		    _puts_recursion(s + 1);
}
