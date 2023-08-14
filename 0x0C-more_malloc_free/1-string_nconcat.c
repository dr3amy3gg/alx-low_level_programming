#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings to n amount of bytes
 * @s1: string one
 * @s2: string two
 * @n: number of bytes of s2 to concat to s1
 * Return: pointer to newly allocated space in memory with new string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, j = 0, l;
	char *s3;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	/* determine length of each string */
	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;

	/* condition for length of s2 */
	if (n >= j)
		n = j;

	/* allocate memory: sizeof char * length of final string + 1 for null term */
	s3 = malloc((sizeof(char) * (n + i)) + 1);
	if (s3 == NULL) /* condition if function fails */
		return (NULL);

	/* concatenation */
	for (l = 0; l < i; l++)
		s3[l] = s1[l];
	for (l = 0; l < n; l++)
		s3[l + i] = s2[l];

	s3[l + i] = '\0';

	return (s3);
}
