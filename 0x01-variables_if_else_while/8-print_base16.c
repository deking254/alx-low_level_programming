#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char y, c;

	y = 0;

	for (y = 0; y <= 9; ++y)
	{
	putchar(y % 10 + '0');
	}
	for (c = 'a' ; c <= 'f' ; ++c)
	{
        putchar(c);
	}
	putchar('\n');
	return (0);
}
