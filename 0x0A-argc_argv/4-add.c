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
int sum, i;

if (argc > 1)
{
for (i = 1; i < argc; i++)
{
if (*argv[i] >= 48 && *argv[i] <= 57)
sum += atoi(argv[i]);
else
{
printf("%s\n", "Error");
return (1);
}
}
printf("%d\n", sum);
}
else
printf("%d\n", 0);
return (0);
}
