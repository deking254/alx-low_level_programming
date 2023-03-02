#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
char pass[84];
int i = 0, sum = 0;
int diff_h1, diff_h2;

srand(time(0));
while (sum < 2772)
{
pass[i] = 33 + rand() % 94;
sum += pass[i++];
}
pass[i] = '\0';

if (sum != 2772)
{
diff_h1 = (sum - 2772) / 2;
diff_h2 = (sum - 2772) / 2;
if ((sum - 2772) % 2 != 0)
diff_h1++;
for (i = 0; pass[i]; i++)
{
if (pass[i] >= (33 + diff_h1))
{
pass[i] -= diff_h1;
break;
}
}
for (i = 0; pass[i]; i++)
{
if (pass[i] >= (33 + diff_h2))
{
pass[i] -= diff_h2;
break;
}
}
}
printf("%s", pass);
return (0);
}
