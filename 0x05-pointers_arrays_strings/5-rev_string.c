#include "main.h"
#include <string.h>

/**
 * rev_string - check the code
 * @s: pointer c
 * Return: Always void.
 */
void rev_string(char *s)
{
	int i = 0, l = 0;
	char t;

	while (s[i++])
	l++;

	for (i = l - 1; i >= len / 2; i--)
	{
	t = s[i];
	s[i] = s[l - i - 1];
	s[l - i - 1] = t;
	}
}
