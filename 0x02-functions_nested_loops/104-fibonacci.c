#include "main.h"

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
	int count;

	unsigned long f1 = 0, f2 = 1, s;
	unsigned long f1h1, f1h2, f2h1, f2h2;
	unsigned long h1, h2;

	for (count = 0; count < 92; count++)
	{
	f1h1 = f1 / 10000000000;
	f2h1 = f2 / 10000000000;
	f1h2 = f1 % 10000000000;
	f2h2 = f2 % 10000000000;
	for (count = 93; count < 99; count++)
	{
	h1 = f1h1 + f2h1;
	h1 = f1h2 + f2h2;
	if (f1h2 + f2h2 > 9999999999)
	{
	h1 += 1;
	h2 %= 10000000000;
	}
	printf("%lu%lu", h1, h2);
	if (count != 98)
	printf(", ");
	f1h1 = f2h1;
	f1h2 = f2h2;
	f2h1 = h1;
	f2h2 = h2;
	}
	printf("\n");
	return (0);
}
