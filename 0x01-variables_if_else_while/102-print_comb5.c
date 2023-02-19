
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
        int b, d;

        for (b = 0; b <=98; b++)
        {
	for (d = 1; d <= 99; d++)
	{
	putchar((b / 10 % 10) + '0');
	putchar((b % 10) + '0');
	putchar(' ');
	putchar((d / 10 % 10) + '0');
	putchar((d % 10) + '0');
	if (b < 98)
	{
	putchar(',');
	putchar(' ');
	}
        
	}
	}
        return (0);
}

