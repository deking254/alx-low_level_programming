#include "main.h"
#include <stddef.h>

/**
 * _strstr - prints buffer in hexa
 * @haystack: the address of memory to print
 * @needle: the size of the memory to print
 *
 * Return: Nothing.
 */

char *_strstr(char *haystack, char *needle)
{

for (; *haystack != '\0'; haystack++)
{
char *hayptr = haystack;
char *nedptr = needle;
while (*hayptr == *nedptr && *nedptr != '\0')
{
hayptr++;
nedptr++;
}
if (*nedptr == '\0')
return (haystack);
}
return (NULL);
}
