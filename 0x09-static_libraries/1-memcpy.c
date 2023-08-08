#include "main.h"
/**
 * _memcpy - copies memory area
 * @dest: memory store location
 * @src: memory where copied
 * @n: bytes
 *
 * Return: the compied memory with n bytes altered
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int f = 0;
	int g = n;

	for (; f < g; f++)
	{
		dest[f] = src[g];
		n--;
	}
	return (dest);
}
