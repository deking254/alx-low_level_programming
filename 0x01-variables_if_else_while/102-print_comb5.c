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
	for (c = b + 1  ; c <= 99 ; c++)
	{
	putchar(a + '0');
	putchar(b + '0');
	do {
	putchar(' ');
	putchar(d + '0');
	if (d > 0)
	{
	c = 0;
	c++;
	putchar(c + '0');
	if (b < 8)
	{
	putchar(',');
	putchar(' ');
	}
	}
	else
	{
	c = 1;
	putchar(c + '0');
	c++;
	}	
	} while (c <= 9);
	}
	}
	}
	}
	return (0);
}
