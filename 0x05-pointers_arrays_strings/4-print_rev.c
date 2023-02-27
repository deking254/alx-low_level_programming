#include "main.h"
#include <string.h>

/**
 * print_rev - check the code
 * @s: pointer c
 * Return: Always void.
 */
void print_rev(char *s)
{
	int i = 0, j;

	for (j = 0; s[j] != '\0'; j++)
	{
	
	}
	for (i = j; i >= 0; --i)
	_putchar(s[i]);
	_putchar('\n');
}
