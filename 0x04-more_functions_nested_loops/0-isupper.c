#include "main.h"
/**
 *_isupper - the function will verify uppercases characters
 *
 *@c: the parameter variable
 *
 *
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return(0);
	}
}
