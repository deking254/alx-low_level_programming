
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a = 0;
	
	while (a % 10 < 10)
{
	putchar(a);
	putchar(',');
	++a;
}
	putchar('\n');
	return (0);	
}
