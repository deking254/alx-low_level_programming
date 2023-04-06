#include "main.h"

/**
 * get_endianness - check the code
 *
 * Return: Always 0.
 */
int get_endianness(void)
{
unsigned int number = 0x12345678;
char *nptr = (char *)&number;
if (*nptr == 0x78)
{
return (1);
}
else
{
return (0);
}
}
