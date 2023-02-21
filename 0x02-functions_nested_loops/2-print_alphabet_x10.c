#include "main.h"

/**
 * print_alphabet - check the code.
 *
 * Return: Always void.
 */
void print_alphabet_x10(void)
{
	int i = 0;
	char j = 'a';

	while (i <= 10)
	{
	while (j <= 'z')
	{
	_putchar(j);
	++i;
	}
	j++;
	_putchar('\n');
	}	
}
