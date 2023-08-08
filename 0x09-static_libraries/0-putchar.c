#include <unistd.h>
/**
 * _putchar - write character c to stdout
 * @c: character to print
 *
 * Return: 1
 * error, -1 returned, erno set appropriately
 */
int_putchar(char c)
{
	return (write(1, &c, 1));
}
