#include <stdio.h>

/**
 * main - print number of argument passed
 *
 * Return: Always 0
 */

int main(int argc, char **argv)
{
	(void)argv;

	printf("%d\n", argc - 1);
	return (0);
}
