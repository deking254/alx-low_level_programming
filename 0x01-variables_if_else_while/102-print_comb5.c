
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
	for (d = 0; a <= 8; d++)
	{
	putchar(a + '0');
	putchar(d + '0');
	putchar(' ');
        for (b = 1; b <= 99; b++)
        {
	if (b < 10)
	{
	putchar('0');
	putchar(b +'0');
	}
	else
	{
	while(b >= 10)
	{
	c = b / 10;
	}
	putchar(c + '0');
	putchar(b % 10 + '0');
	}
	if (a < 98)
	{
	putchar(',');
	}
        }
	}
	}
        return (0);
}

