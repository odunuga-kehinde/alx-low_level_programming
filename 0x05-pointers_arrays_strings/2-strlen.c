#include "main.h"

/**
 * _strlen - returns the lenght of a string
 * @s: char to check lenght of string
 * Return: 0
 */

int _strlen(char *s)
{
	int a = 0; /*start counter from 0*/

	for (; *s++;)
		a++;
	return (a);
}
