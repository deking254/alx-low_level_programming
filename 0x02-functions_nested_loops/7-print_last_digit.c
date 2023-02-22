#include "main.h"

/**
 * print_last_digit - check the code
 * @a: integer operand.
 * Return: Always int.
 */
int print_last_digit(int a)
{
	int lastlast = a % 10;

	if (lastlast  < 0)
	{
	a *= -1;
	}	
	_putchar(lastlast + '0');
	return (lastlast);
}
