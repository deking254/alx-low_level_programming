#include "main.h"
#include <string.h>

/**
 * rev_string - check the code
 * @s: pointer c
 * Return: Always void.
 */
void rev_string(char *s)
{
	int i, j;

	j = strlen(s);
	for (i = j; i >= 0; i--)
	_putchar(s[i]);
}
