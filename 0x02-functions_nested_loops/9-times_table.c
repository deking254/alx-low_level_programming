#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    times_table();
    return (0);
}
void times_table(void)
{
	int i, j = 0;

	while (i <= 10)
	{
	while (j <= 10)
	{
	int val = i * j;
	if (val >=10)
	{
	int f = (_putchar(val / 10 % 10);
	int l = (_putchar(val % 10);
	_putchar(f + '0');
	_putchar(l + '0');
	}else
	{
	_putchar(val + '0');
	}
	if (j < 10)
	{
	_putchar(',');
	_putchar(' ')
	}
	}
	_putchar('\n');
	}
}
