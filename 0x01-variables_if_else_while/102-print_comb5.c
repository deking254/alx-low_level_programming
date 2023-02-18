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
	putchar(a + '0');
	putchar(b + '0');
	if (d > 0)
	{
	c = 0;
	do {
	putchar(' ');
	putchar(d + '0');
	putchar(c + '0');
	c++;
	if (b < 8)
	{
	putchar(',');
	putchar(' ');
	}
	else
	{
	putchar(c + '0');
	c++;
	}	
	} while (c <= 9);
	}
	if (d <= 0)
        {
        c = 1;
        do {
        putchar(' ');
        putchar(d + '0');
        putchar(c + '0');
        c++;
        if (b < 8)
        {
        putchar(',');
        putchar(' ');
        }
        else
        {
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
