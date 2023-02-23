#include <stdio.h>
#include "main.h"

/**
 * print_number - check the code
 * @n: integer
 * Return: Always void.
 */
void print_number(int n)
{
	unsigned int k = n;

	if (n < 0)
	{
	n *= -1;
	k = n;
	_putchar('-');
	}
	k /= 10;
	if (k != 0)
	printf_number(k);
	_putchar((unsigned int) n % 10 + '0');
}
