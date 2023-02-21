#include "main.h"

/**
 * _islower - check the code.
 *
 * Return: Always int.
 */
int _islower(int c)
{
	int asci;

	asci = (int) c;
	if (asci >= 97 && asci <= 122)
	{
	return (1);
	} else
	{
	return (0);
	}
}
