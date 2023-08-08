#include "main.h"
/**
 * _isalpha - check alphabetical character
 * @c: character input for check
 *
 *
 * return: 1 if c is letter, 0 otherwise
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'Z') || (c >= 'A' && c <= 'Z'));
}
