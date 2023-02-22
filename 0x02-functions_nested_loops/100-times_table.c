#include "main.h"

/**
 * print_times_table - check the code.
 * @n: integer
 * Return: Always void.
 */
void print_times_table(int n)
{
	int i = 0;
	int j = 0;
	int val, f, l;

	if (n <= 15 && n >= 0)
	{
	while (i <= n)
	{
	while (j <= n)
	{
	val = i * j;
	if (val >= 10)
	{
	f = (_putchar(val / 10 % 10));
	l = (_putchar(val % 10));
	_putchar(f + '0');
	_putchar(l + '0');
	j++;
	}
	else
	{
	_putchar(val + '0');
	j++;
	}
	if (j < n)
	{
	_putchar(',');
	_putchar(' ');
	}
	}
	i++;
	_putchar('\n');
	}	
	}
}
