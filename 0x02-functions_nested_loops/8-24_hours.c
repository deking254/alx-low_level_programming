#include "main.h"

/**
 * jack_bauer - check the code
 *
 * Return: Always void.
 */
void jack_bauer(void)
{
	int i = 0;
	int j = 0;

	while (i <= 23)
	{
	while (j <= 59)
	{
	_putchar(j / 10 % 10);
        _putchar(j % 10);
        _putchar(':');
	_putchar(i / 10 %10);
	_putchar(i % 10);
	j++;
	_putchar('\n');
	}
	i++;
	}
}
