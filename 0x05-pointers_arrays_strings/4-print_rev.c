#include "main.h"
#include <string.h>

/**
 * print_rev - check the code
 * @s: pointer c
 * Return: Always void.
 */
void print_rev(char *s)
{
	int i, j;

	j = strlen(s);
	for(i = j; i >= 0; i--)
	_putchar(s[i]);
	_putchar('\n');
}
