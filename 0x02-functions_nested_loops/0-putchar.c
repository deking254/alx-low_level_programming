#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	int i = 0;
	char putcha[] = {'_' , 'p' , 'u' , 't' , 'c' , 'h' , 'a' , 'r', '\0'};
	
	while (i < 10)
	{
	_putchar(putcha[i]);
	}
	_putchar('\n');
	
    return (0);
}
