#include <stdio.h>
#include <stdlib.h>
/**
 * main - check the code
 * @argc: character
 * @argv: character
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
long sum = 0, i;
char *endptr;
long val;

if (argc > 1)
{
for (i = 1; i < argc; i++)
{
val = strtol(argv[i], &endptr, 10);
if (*endptr == '\0')
sum += val;
else
{
printf("%s\n", "Error");
return (1);
}
}
printf("%ld\n", sum);
}
else
printf("%d\n", 0);
return (0);
}
