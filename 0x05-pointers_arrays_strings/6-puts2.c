#include "main.h"
#include <string.h>
/**
 * puts2 - check the code
 * @str: pointer c
 * Return: Always void.
 */
void puts2(char *str)
{
int i, j;

j = strlen(str);
for (i = 0; i <= j; i += 2)
_putchar(str[i]);
_putchar('\n');



}
