#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	for (a = '0'; a <= '9'; ++a)
	{
	putchar(a);
	for (;a <= 9; ++a)
	{
	putchar(a++);
	putchar(',');
	}	
	}
	putchar('\n');
	return (0);	
}
