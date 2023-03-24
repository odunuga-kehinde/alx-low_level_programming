#include "main.h"

/**
 * more_numbers - print 0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 in ten places
 *
 * Return: void
 */

void more_numbers(void)
{
	char c;

	for (c = 0; c <= 14; c++)
	
	if (c != 2 || c != 4)
	{
		_putchar(c);
	}
	_putchar('\n');
}
