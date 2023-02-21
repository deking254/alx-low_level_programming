#include "main.h"

/**
 * _isalpha - check the code.
 *
 * Return: Always int.
 */
int _isalpha(int c)
{       
	int asci;

	asci = (int) c;
	if (asci >= 97 && asci <= 122)
	{
	return (1);
	}
	else if (asci >= 65 && asci <= 90)
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
