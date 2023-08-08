#include "main.h"
/**
 * _strncpy - copy the string
 * @dest: value input
 * @src: value input
 * @n: value input
 * return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int r;

	r = 0;
	while (r < n && src[r] != '\0')
	{
		dest[r] = src[r];
		r++;
	}
	while (r < n)
	{
		dest[r] = '\0';
		r++;
	}
	return (dest);
}
