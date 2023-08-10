#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - make copy of string in memory
 * @str: string input
 * Return: pointer to make copy , NULL if doesnt exist
 */
char *_strdup(char *str)
{
	char *testcharacter;
	int x, y = 0;
	
	if (str == NULL)
		return (NULL);
	
	x = 0;
	while (str[x] != '\0')
		x++;
	testcharacter = malloc(sizeof(char) * (x + 1));

	if (testcharacter == NULL)
		return (NULL);

	for (y = 0; str[y]; y++)
		testcharacter[y] = str[y];
	
	return (testcharacter);
}
