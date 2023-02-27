#include "main.h"
#include <string.h>

/**
 * print_rev - check the code
 * @s: pointer c
 * Return: Always void.
 */
void print_rev(char *s)
{
	int j = 0;

	while (s[j] != '\0')
	{
	j += 1;
	}
	for (; j >= 0; --j)
	_putchar(s[j]);
	_putchar('\n');
}
