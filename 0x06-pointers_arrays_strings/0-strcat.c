#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: string to append to
 * @src: string to add
 *
 * Return: a pointer to the resulting string
 */
char *_strcat(char *dest, char *src)
{
	int a, k;

	a = 0;
	k = 0;

	while (dest[a] != '\0')
		a++;

	while (src[k] != '\0')
	{
		dest[a] = src[k];
		k++;
		a++;
	}

	dest[a] = '\0';

	return (dest);
}
