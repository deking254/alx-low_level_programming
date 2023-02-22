#include "main.h"

/**
 * print_alphabet_x10 - check the code.
 *
 * Return: Always void.
 */
void print_alphabet_x10(void)
{
	int i = 0;
	char j = 'a';

	while (i <= 9)
	{
	while (j <= 'z')
	{
	_putchar(j);
	++j;
	}
	_putchar('\n');
	++i;
	}
}
