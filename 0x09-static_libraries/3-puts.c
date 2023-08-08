#include "main.h"
/**
 * _puts - print string followed by new line to the stdout
 * @str: input string value
 *
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
