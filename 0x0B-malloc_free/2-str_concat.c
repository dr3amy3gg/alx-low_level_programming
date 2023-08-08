#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - concatenates two strings
 * @s1: string one
 * @s2: string two
 * Return: pointer to newly concatenated string
 */

char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0, k, l = 0;
	char *s3;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[i] != '\0')
		i++;

	while (s2[j] != '\0')
		j++;

	k = i + j;
	s3 = malloc((sizeof(char) * k) + 1);

	if (s3 == NULL)
		return ('\0');

	j = 0;
	while (l < k)
	{
		if (l <= i)
		{
			s3[l] = s1[l];
		}

		if (l >= i)
		{
			s3[l] = s2[j];
			j++;
		}
		l++;

	}

	s3[l] = '\0';

	return (s3);
}
