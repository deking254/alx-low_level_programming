#include "main.h"

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
        int i = 1;
        int j = 2;
        int m = 0;

        while (m <= 49)
        {
        _putchar(i + '0');
        _putchar(',');
        _putchar(' ');
        _putchar(j + '0');
        _putchar(',');
        _putchar(' ');
        j += i;
        i = j;
        m++;
        }
    return (0);
}
