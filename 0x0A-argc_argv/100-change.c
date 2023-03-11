#include <stdio.h>
#include <stdlib.h>

void changehandler(int c, int f);
/**
 * main - check the code
 * @argc: character
 * @argv: character
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
int centi;

if (argc == 2)
{
centi = atoi(argv[1]);
if (centi < 0)
printf("%d\n", 0);
else
{
changehandler(centi, 0);
}
}
else
{
printf("%s\n", "Error");
return (1);
}
return (0);
}



/**
 * changehandler - check the code
 * @cents: character
 * @f: cents
 * Return: Always 0.
 */
void changehandler(int cents, int f)
{
int change = f;

if (cents >= 25)
{
if (cents % 25 == 0)
printf("%d\n", cents / 25);
else
{
change += cents / 25;
changehandler(cents % 25, change);
}
}
if (cents >= 10 && cents < 25)
{
if (cents % 10 == 0)
printf("%d\n", cents / 10);
else
{
change += cents / 10;
changehandler(cents % 10, change);
}
}
if (cents >= 5 && cents < 9)
{
if (cents % 5 == 0)
printf("%d\n", change += cents / 5);
else
{
change += cents / 5;
changehandler(cents % 5, change);
}
}
if (cents >= 2 && cents < 5)
{
if (cents % 2 == 0)
printf("%d\n", change += cents / 2);
else
{
change += cents / 2;
changehandler(cents % 2, change);
}
}
if (cents >= 1 && cents < 2)
printf("%d\n", change += cents);
if (cents == 0)
printf("%d\n", 0);
}
