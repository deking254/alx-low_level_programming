#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a;
	int c, b;

	for (a = 0; a <= 7; a++)
	{
	for (b = a + 1; b <= 8; b++)
	{
	for (c = b + 1 ; c <= 9 ; c++)
	{
	putchar(a + '0');
	putchar(b + '0');
	putchar(c + '0');
	if (a < 7)
	{
	putchar(',');
	putchar(' ');
	}
	}
	}
	}
	putchar('\n');
	return (0);
}
