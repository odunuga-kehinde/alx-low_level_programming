#include "main.h"

/**
 * _isupper -  Write a function that checks for uppercase character
 *
 * Return: 1 if true. Else, return 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
