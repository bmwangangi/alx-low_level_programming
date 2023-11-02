#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes of s2 to concatenate
 *
 * Return: pointer to the concatenated string or NULL on failure
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concatenated_string;
	unsigned int s1_length = 0, s2_length = 0, i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[s1_length] != '\0')
		s1_length++;

	while (s2[s2_length] != '\0')
		s2_length++;

	if (n >= s2_length)
		n = s2_length;

	concatenated_string = malloc(sizeof(char) * (s1_length + n + 1));

	if (concatenated_string == NULL)
		return (NULL);

	for (i = 0; i < s1_length; i++)
		concatenated_string[i] = s1[i];

	for (j = 0; j < n; j++)
		concatenated_string[i + j] = s2[j];

	concatenated_string[i + j] = '\0';

	return (concatenated_string);
}
