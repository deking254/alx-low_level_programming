#include "main.h"

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
	int i = 0;
	int sum = 0;

	while (i < 4000000)
	{
	if ((i % 2) == 0)
	{
	sum += i;
	i++;
	}
	while (sum > 0)
	{
	_putchar(sum % 10 + '0');
	sum = sum / 10;
	}
	}
	return (0);
}
