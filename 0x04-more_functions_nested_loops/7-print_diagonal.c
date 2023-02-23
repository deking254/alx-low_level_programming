#include "main.h"

/**
 * print_diagonal - check the code
 * @n: integer
 * Return: Always void.
 */
void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	_putchar('\n');
	else
	{
	for (j = 0; j < n; j++)
	{
	for (i = 0; i < j; i++)
	{
	_putchar(32);
	}
	_putchar('\\');
	_putchar('\n');
	}
	}
}
