#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
	char ch;
	int in;
	long int li;
	long long int lli;
	float fl;
{   
	printf("Size of a char: %d byte(s)", sizeOf(ch));
	printf("Size of a int: %d byte(s)", sizeOf(in));
	printf("Size of a long int: %d byte(s)", sizeOf(li));
	printf("Size of a long long int: %d byte(s)", sizeOf(lli));
	printf("Size of a float: %d byte(s)", sizeOf(fl));
	return (0);
}
