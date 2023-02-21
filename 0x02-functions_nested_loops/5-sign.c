#include "main.h"

/**
 * print_sign - check the code.
 *
 * Return: Always int.
 */
int print_sign(int n)
{
	if (n > 0)
	{
	return 1;
	_putchar('+');
	}else if (n == 0)
	{
	return 0;
	_putchar('0');
	}else if (n < 0)
	{
	return -1;
	_putchar('-');
	}
}
