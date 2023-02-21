#include "main.h"

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
    print_times_table(3);
    _putchar('\n');
    print_times_table(5);
    _putchar('\n');
    print_times_table(98);
    _putchar('\n');
    print_times_table(12);  
    return (0);
}
void print_times_table(int n)
{
	int i , j = 0;

	if (n <= 15 && n >= 0)
	{
	while (i <= n)
        {
        while (j <= n)
        {
        int val = i * j;
        if (val >=10)
        {
        int f = (_putchar(val / 10 % 10);
        int l = (_putchar(val % 10);
        _putchar(f + '0');
        _putchar(l + '0');
        }else
        {
        _putchar(val + '0');
        }
        if (j < n)
        {
        _putchar(',');
        _putchar(' ')
        }
        }
        _putchar('\n');
        }	
	}
}
