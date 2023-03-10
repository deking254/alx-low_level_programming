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
int f = 0;
if (argc == 3)
{
printf("%d\n", atoi(argv[1])* atoi(argv[2]));
}
else
{
printf("%s\n", "Error");
f = 1;
}
return (f);
}

