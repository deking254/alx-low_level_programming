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

	if (y <= 9)
	{
	putchar(y % 10 + '0');
	y++;
	}
	if (y = 9)
	{
	for (c = 'a' ; c <= 'f' ; ++c)
	{
	putchar(c);
	}
	}
	putchar('\n');
	return (0);
}
