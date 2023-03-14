#include "main.h"
#include <stdlib.h>


/**
 * _strdup - check the code
 * @str: integer operand.
 * Return: Always int.
 */
char *_strdup(char *str)
{
char *arr_ptr;
int i = 0, j;
if (str == NULL)
return (NULL);
while (str[i] != '\0')
i++;
arr_ptr = malloc(i + 1);
if (arr_ptr == NULL)
return (NULL);
for (j = 0; str[j] != '\0'; j++)
{
arr_ptr[j] = str[j];
}
arr_ptr[j + 1] = '\0';
return (arr_ptr);
}