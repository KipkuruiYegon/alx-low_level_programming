#include "main.h"

/**
 * _strlen_recursion - function returns the string length through recursion.
 * @s: Pointer to the string input.
 * Return: string length
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}
