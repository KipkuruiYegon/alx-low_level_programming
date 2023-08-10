#include "main.h"
#include <stdlib.h>
/**
 * create_array - Creates array of size size then assign char c
 * @size: array size
 * @c: char to assign to each element
 * Description: allocate an array and assign char to each element
 * Return: A pointer to to array, else NULL
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int r;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);
	for (r = 0; r < size; r++)
		str[r] = c;
	return (str);
}
