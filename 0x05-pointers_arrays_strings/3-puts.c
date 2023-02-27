#include "main.h"
#include <string.h>

/**
 * _puts - check the code
 * @str: pointer c
 * Return: Always void.
 */
void _puts(char *str)
{
	int i, j;

	j = strlen(str);
	for (i = 0; i < j; i++)
	_putchar(str[i]);
	_putchar('\n');
}
