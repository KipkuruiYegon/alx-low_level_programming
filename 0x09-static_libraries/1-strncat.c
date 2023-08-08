#include "main.h"
/**
 * _strncat - concatenate two strings
 * that use n bytes from src
 * @dest: value input
 * @src: value input
 * @n: value input
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int r;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	r = 0;
	while (r < n && src[r] != '\0')
	{
		dest[i] = src[r];
		i++;
		r++;
	}
	dest[i] = '\0';
	return (dest);
}
