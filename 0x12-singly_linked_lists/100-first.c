#include "stdio.h"

/**
 * trab - function executed before the main function
 * Return: void nmber type
 */
void __attribute__((constructor)) trab()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
