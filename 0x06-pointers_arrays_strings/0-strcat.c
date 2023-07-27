#include "main.h"

/**
 * _strcat - concatenates two strings
 * @src: string two
 * @dest: string one
 * Return: resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;
	
	while (*(dest + i))
		i++;

	while (*(src + j))
	{
		*(dest+i) = *(src+j);
		i++;
		j++;
	}
	*(dest+i) = '\0';

	return (dest);
}
