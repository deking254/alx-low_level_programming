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

	if (n <= 98)
	{
	for (; n <= 98; n++)
	{
	if (n == 98)
	printf("%d", n);
	_putchar('\n');
	break;
	}
	else
	{
	printf("%d", n);
	}
	}
	}
	else
	{
	for (; n >= 98; n--)
	{
	if (n == 98)
	{
	printf("%d", n);
	_putchar('\n');
	break;
	}
	else
	{
	printf("%d", n);
	}
	}
	}
}
