#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	int i = 0;
	char putcha[] = {'_' , 'p' , 'u' , 't' , 'c' , 'h' , 'a' , 'r'};
	
	while (i <= 7)
	{
	_putchar(putcha[i]);
	i++;
	}
	_putchar('\n');
	 return (0);
}
