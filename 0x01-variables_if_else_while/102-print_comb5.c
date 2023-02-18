#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a;
	int c, b, d;

	for (a = 0; a <= 9; a++)
	{
	for (b = 0; b <= 8; b++)
	{
	for (c = b + 1  ; c <= 99 ; c++)
	{
	d = c;
	while (d >= 10)
	{
	d = c / 10;
	}
	putchar(a + '0');
	putchar(b + '0');
	if (b < 7)
	{
	putchar(' ');
	}
	putchar(d + '0');
	putchar(c % 10 + '0');
	putchar(',');
	putchar(' ');
	}
	}
	}
	return (0);
}
