#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - prints the lowercase alphabets with a new line
 *
 * Return: void
 */
void print_alphabet(void)
{
	char lower;

	for (lower = 'a'; lower <= 'z'; lower++)
		_putchar(lower);

	_putchar('\n');
}
