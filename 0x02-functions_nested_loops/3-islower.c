#include "main.h"

/**
 * _islower - Function that checks for lowercase character.
 *
 * Return: 1 if character is lowercase, otherwise 0
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);

	return (0);
}
