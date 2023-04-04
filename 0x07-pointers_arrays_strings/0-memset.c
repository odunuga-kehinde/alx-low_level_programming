#include "main.h"

/**
 * _memset - function fill the first @n bytes of memory area pointed by @s with constant byte @b
 *
 * Return: a pointer to the memory area @s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	do
	{
	s[i] = b;
	i++;
	}
	while (i < n);
	
	return (s);
}
