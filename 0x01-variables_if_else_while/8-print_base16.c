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

	if (y <= 9)
	{
	putchar(y % 10 + '0');
	y++;
	}
	for (char c = 'a' ; c <= 'f' ; ++c)
	{
	printchar(c);
	}
	putchar('\n');
	return (0);
}
