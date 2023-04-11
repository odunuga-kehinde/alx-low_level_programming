#include <stdlib.h>
#include "main.h"

/**
 * str_concat - add ends of input together for size
 * @s1: 1st input to concat
 * @s2: 2nd input to concat
 *
 * Return: concat of s1 and s2
 */

char *str_concat(char *s1, char *s2)
{
	char *concat;
	int i, ci;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	i = ci = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[ci] != '\0')
		ci++;
	concat = malloc(sizeof(char) * (i + ci + 1));

	if (concat == NULL)
		return (NULL);
	i = ci = 0;
	while (s1[i] != '\0')
	{
		concat[i] = s1[i];
		i++;
	}

	while (s2[ci] != '\0')
	{
		concat[i] = s2[ci];
		i++, ci++;
	}
	concat[i] = '\0';
	return (concat);
}
