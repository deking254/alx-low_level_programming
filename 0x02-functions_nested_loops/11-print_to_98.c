#include "main.h"

/**
 * print_to_98 - check the code
 * @n: integer
 * Return: Always void.
 */
void print_to_98(int n)
{
	int i = 0;

	if (n < 98)
	{
	while (i < ((98 - n)))
	{
	_putchar(n + '0');
	i++;
	}
	}
	else if (n > 98)
	{
	while (i < ((n - 98)))
	{
	_putchar(n + '0');
	i++;
	}
	}
	else if (n == 98)
	{
	_putchar(n + '0');
	}
}
