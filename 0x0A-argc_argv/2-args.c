#include <stdio.h>

/**
 * main - check the code
 * @argc: character
 * @argv: character
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
int count = 0;
while (count < argc)
{
printf("%s\n", argv[count]);
count++;
}
return (0);
}

