#include "main.h"

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
    print_alphabet_x10();
    return (0);
}
void print_alphabet_x10(void)
{
	int i = 0;
	char j = 'a';

	while (i <= 10)
	{
	while (j <= 'z')
	{
	_putchar(j);
	}
	_putchar('\n');
	}	
}
