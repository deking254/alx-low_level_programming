#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a;
	int c;

	for (a = 0; a <= 8; a++)
	{
	putchar(a + '0');
	for (c += 1 ; c <= 9 ; c++)
	{
	putchar(c + '0');
	if (c < 9)
	{
	putchar(',');
	putchar(' ');
	}
	}
	}
	putchar('\n');
	return (0);
}
