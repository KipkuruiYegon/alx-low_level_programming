#include "main.h"

/**
* _isdigit - checks the digits in range(0 to 9)
*
* @c: takes in a the character/digit for checking
*
* Return: 1 if digit and 0 if anything else
*/

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	return (1);
	return (0);
}
