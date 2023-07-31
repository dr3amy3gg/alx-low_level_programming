#include "main.h"

/**
 * leet - converts text to 1337 code
 * @a: input text
 * Return: encoded text
 */

char *leet(char *a)
{
	int i;
	int j;

	int arr1[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	int arr2[] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

	for (i = 0; a[i] != '\0'; i++)
	{
		for (j = 0; arr1[j] != '\0'; j++)
		{
			if (a[i] == arr1[j])
			{
				a[i] = arr2[j];
			}
		}
	}
	return (a);
}
