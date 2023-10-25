#include <stdio.h>

/**
 *   * _puts_recursion - main function
 *     *
 *       * @s: function parameter
 *         *
 *           * Return: Always 0.
 *             */




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
