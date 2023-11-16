#include "stdio.h"

/**
 * bmain - prints before the
 * main function is executed
 */
void __attribute__((constructor)) bmain()
{
	printf("You're beat! and yet, you must allow,");
	printf("\nI bore my house upon my back!,\n");
}
