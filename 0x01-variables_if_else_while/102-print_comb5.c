
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
        int a, b, d;

        for (a = 0; a <= 9; a++)
        {
	for (b = 0; a <= 8; b++)
	{
	for (d = 1; d <= 99; d++)
	{
	putchar(a + '0');
	putchar(b + '0');
	putchar(' ');
	if (d < 10)
	{
	putchar('0');
        putchar(b + '0');
	} else if (d >= 10)
	{
	putchar((d / 10 % 10) + '0');
	putchar((d % 10) + '0');
	}
        putchar(',');
	if (d < 8)
	{
	putchar(' ');
	}
        }
	}
	}
        return (0);
}

