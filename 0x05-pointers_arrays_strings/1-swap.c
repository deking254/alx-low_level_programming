#include "main.h"

/**
 * swap_int - check the code
 * @a: pointer
 * @b: pointer b
 * Return: Always void.
 */
void swap_int(int *a, int *b)
{
int c, d;

	c = *a;
	d = *b;
	*a = d;
	*b = c;
}

