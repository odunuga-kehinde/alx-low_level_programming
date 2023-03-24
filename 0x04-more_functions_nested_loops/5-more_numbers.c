#include "main.h"

/**
 * more_numbers - print 0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 in ten places
 *
 * Return: void
 */

void more_numbers(void)
{
	char c;
	for (char c = 0; c <= 14; c++)
	{
		for (char i = 1; i < 11; i++)
		{
			_putchar(c);
		}
	_putchar('\n');
}
