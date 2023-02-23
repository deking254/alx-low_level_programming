#include "main.h"

/**
 * _isdigit - check the code
 * @c: integer ascii value.
 * Return: Always void.
 */
int _isdigit(int c)
{
	int i;

	for (i = 0; i < 10; i++)
	{
	if (c == i)
	return (1);
	else
	return (0);
	}
}
