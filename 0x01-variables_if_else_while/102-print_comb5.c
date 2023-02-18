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
	for (d = 0; d <= 9; d++)
	{
	for (c = 1  ; c <= 9 ; c++)
	{
	putchar(a + '0');
	putchar(b + '0');
	if (b < 7)
	{
	putchar(' ');
	}
	putchar(d + '0');
	putchar(c + '0');
	putchar(',');
	}
	}
	}
	}
	return (0);
}
