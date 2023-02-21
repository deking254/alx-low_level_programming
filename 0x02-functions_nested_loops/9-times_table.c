#include "main.h"

/**
 * times_table - check the code
 *
 * Return: Always void.
 */
void times_table(void)
{
	int i = 0;
	int j = 0;

	while (i <= 10)
	{
	while (j <= 10)
	{
	int val = i * j;
	if (val >=10)
	{
	int f = (_putchar(val / 10 % 10));
	int l = (_putchar(val % 10));
	_putchar(f + '0');
	_putchar(l + '0');
	j++;
	}
	else
	{
	_putchar(val + '0');
	j++;
	}
	if (j < 10)
	{
	_putchar(',');
	_putchar(' ');
	}
	}
	i++;
	_putchar('\n');
	}
}
