#include "main.h"

/**
 * more_numbers - code
 * more_numbers - check the code
 * Return: Always void.
 */
void more_numbers(void)
{
	int i, j;

	for (j = 0; j <= 9; j++)
	{
	for (i = 0; i < 15;  i++)
	_putchar(i / 10 % 10);
	_putchar(i % 10);
	_putchar('\n');
	}
}
