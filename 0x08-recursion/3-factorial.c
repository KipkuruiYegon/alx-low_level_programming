#include "main.h"

/**
 * factorial - function returns the factorial of the number input
 * @n: factorial number return input from
 *
 * Return: factorial of n
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
