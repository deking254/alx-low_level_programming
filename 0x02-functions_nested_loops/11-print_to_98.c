#include "main.h"

/**
 * print_to_98 - check the code
 *
 * Return: Always void.
 */
void print_to_98(int n)
{
	int i = 0;

	if (n < 98)
	{
	while (i < ((98 - n) + 1))
	{
	_putchar(n + '0');
	_putchar((n++) + '0');
	}
	}else if (n > 98)
        {
        while (i < ((n - 98) + 1))
        {
        _putchar(n + '0');
        _putchar((n--) + '0');
        }
        }else if (n == 98)
        {
        _putchar(n + '0');
        }
}
