#include "main.h"

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
    int r;

    r = _islower('H');
    _putchar(r + '0');
    r = _islower('o');
    _putchar(r + '0');
    r = _islower(108);
    _putchar(r + '0');
    _putchar('\n');
    return (0);
}
int _islower(int c)
{
	int asci;

	int asci = (int) c;
	if (acsci >= 97 && asci <=122)
	{
	return 1;
	}else
	{
	return 0;
	}
}
