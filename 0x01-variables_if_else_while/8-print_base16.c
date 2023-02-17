#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char y;

	y = 0;

	char c:

	if (y <= 9)
	{
	putchar(y % 10 + '0');
	y++;
	}
	for (c = 'a' ; c <= 'f' ; ++c)
	{
	putchar(c);
	}
	putchar('\n');
	return (0);
}
