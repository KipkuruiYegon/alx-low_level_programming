#include "main.h"
/**
 *_memcpy - a function that copies memory area
 *@dest: memory where is stored
 *@src: memory where is copied
 *@n: number of bytes
 *
 *Return: copied memory with n byted changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int k = 0;

	while (n > 0)
	{
		dest[r] = src[k];
		r++;
		k++;
		n--;
	}
	return (dest);
}
