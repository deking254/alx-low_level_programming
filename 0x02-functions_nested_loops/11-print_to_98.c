#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    print_to_98(0);
    print_to_98(98);
    print_to_98(111);
    print_to_98(81);
    print_to_98(-10);
    return (0);
}
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
