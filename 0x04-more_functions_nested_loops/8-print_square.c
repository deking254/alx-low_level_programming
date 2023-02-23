#include "main.h"

/**
 * print_square - check the code
 * @size: integer
 * Return: Always void.
 */
void print_square(int size)
{
	int i;

	if (size <= 0)
	{
	_putchar('\n');
	}
	else
	{
	for (j = 0; j < size; j++)
	{
	for (i = 0; i < size; i++)
	_putchar(35);
	_putchar('\n');
	}
	}
}
