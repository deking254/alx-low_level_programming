#include "main.h"

/**
 * print_line - code
 * more_numbers - check the code
 * @n: integer
 * Return: Always void.
 */
void print_line(int n)
{
	int i;

	if (n <= 0)
	{
	_putchar(92);
	_putchar('n');
	}
	else
	{
	for (i = 0; i < n; i++)
	{
	_putchar(95);
	}
	_putchar(92);
	_putchar('n');
	}
}
