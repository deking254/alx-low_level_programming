
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
        int a, d;
        int b, c;

        for (a = 0; a <= 9; a++)
        {
	for (d = 0; d <= 8; d++)
	{
        for (b = 1; b <= 99; b++)
        {
	putchar(a + '0');
        putchar(d + '0');
        putchar(' ');
	if (b < 10)
	{
	putchar('0');
	putchar(b +'0');
	}
	else
	{
	putchar(c + '0');
	putchar(b % 10 + '0');
	}
	if (d < 8)
	{
	putchar(',');
	}
        }
	}
	}
        return (0);
}

