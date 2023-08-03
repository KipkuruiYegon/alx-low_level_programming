#include "main.h"

/**
 * _puts_recursion - function prints a string, followed by a new line.
 * @s: string input
 * Return: no return.
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}