#include "main.h"
#include <stdio.h>
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
	while (i < (98 - n)+1)
	{
	printf("%d", n);
	_putchar('\n');
	n++;
	}
	}
	else if (n > 98)
	{
	while (i < (n - 98)+1)
	{
	printf("%d", n);
	_putchar('\n');
	n--;
	}
	}
	else if (n == 98)
	{
	printf("%d", n);
	_putchar('\n');
	}
}
