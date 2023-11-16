#include "stdio.h"

/**
 * bmain - function executed before the main function
 * Return: void nmber type
 */
void __attribute__((constructor)) bmain()
{
	printf("You're beat! and yet, you must allow,");
	printf("\nI bore my house upon my back!,\n");
}
