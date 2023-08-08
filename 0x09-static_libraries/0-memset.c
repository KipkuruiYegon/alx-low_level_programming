#include "main.h"
/**
 * _memset - fill memory block with specified value
 * @s: address start of memory fo filling
 * @b: expected value
 * @n: byte size to be changed
 *
 * Return: Array changed with new vale for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int y = 0;

	for (; n > 0; y++)
	{
		s[y] = b;
		n--;
	}
	return (s);
}
