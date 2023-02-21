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

	while (i < 1024)
	{
	if ((i % 3) == 0 || (i % 5) == 0)
	{
	sum += i;
	i++;
	}
	while (sum > 0)
	{
	_putchar(sum % 10);
	sum = sum / 10;
	}
	}	
  
    return (0);
}

