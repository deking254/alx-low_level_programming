#include "main.h"

/**
 * rot13 - check the code
 * @str: integer operand.
 * Return: Always int.
 */
char *rot13(char *str)
{
int i1 = 0;
int i2;

char al[52] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H'
, 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R'
, 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', 'a', 'b'
, 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm'
, 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w'
, 'x', 'y', 'z'};

char rot13key[52] = {'N', 'O', 'P', 'Q', 'R',
		     'S', 'T', 'U', 'V', 'W', 'X',
		     'Y', 'Z', 'A', 'B', 'C', 'D',
		     'E', 'F', 'G', 'H', 'I', 'J',
		     'K', 'L', 'M', 'n', 'o', 'p',
		     'q', 'r', 's', 't', 'u', 'v',
		     'w', 'x', 'y', 'z', 'a', 'b',
		     'c', 'd', 'e', 'f', 'g', 'h',
		     'i', 'j', 'k', 'l', 'm'};
while (str[i1])
{
for (i2 = 0; i2 < 52; i2++)
{
if (str[i1] == al[i2])
{
str[i1] = rot13key[i2];
break;
}
}
i1++;
}
return (str);
}
