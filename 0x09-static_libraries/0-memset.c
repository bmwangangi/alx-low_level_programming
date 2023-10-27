#include "main.h"

/**
  * _memset - main function of the prototype
  *
  * @b: The value that is been  used to fill the memory
  *
  * @s: The function paramater
  *
  * @n: The function parameter
  *
  * Return: s
  */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	s[a] = b;
	return (s);
}
