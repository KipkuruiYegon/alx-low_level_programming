#include "main.h"
#include <stdio.h>

/**
 * *_strstr - locates a substring
 * @haystack: string to search in
 * @needle: substring to look for
 *
 * Return: pointer to the beginning of the located substring
 * or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	int r, q;

	for (r = 0; haystack[r] != '\0'; r++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[r + q] != needle[q])
				break;
		}
		if (!needle[q])
			return (&haystack[r]);
	}
	return (NULL);
}
