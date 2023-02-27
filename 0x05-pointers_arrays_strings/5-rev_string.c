#include "main.h"
#include <string.h>

/**
 * rev_string - check the code
 * @s: pointer c
 * Return: Always void.
 */
void rev_string(char *s)
{
	int j = 0;
	int i = 0;
	char t;

	while (s[j] != '\0')
	{
	j++;
	}
	for (j -= 1; j >= 0; j--)
	{
	s[j] = t[i];
	i++;
	}
}
