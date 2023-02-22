#include "main.h"
#include <stdio.>
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
	int number;

	while (m <= 50)
	{
	printf("%d, ",i);
	printf("%d, ",j);
	i = j;
	j += i;
	m++;
	}
	return (0);
}
