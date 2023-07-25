#include "main.h"
/**
 * *_strcpy - copies the string pointed by src
 * @dest: copy to
 * @src: copy from
 * Return: pointer ro dest
 */
char *_strcpy(char *dest, char *src)
{
	int y = 0;
	int x = 0;

	while ((*src + y) != '\0')
	{
		y++;
	}
	for (; x < y; x++)
	{
		dest[x] = src[x];
	}
	dest[y] = '\0';
	return (dest);
}
