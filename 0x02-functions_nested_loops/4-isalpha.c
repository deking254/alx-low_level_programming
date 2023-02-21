#include "main.h"

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
    int r;

    r = _isalpha('H');
    _putchar(r + '0');
    r = _isalpha('o');
    _putchar(r + '0');
    r = _isalpha(108);
    _putchar(r + '0');
    r = _isalpha(';');
    _putchar(r + '0');
    _putchar('\n');
    return (0);
}
int _isalpha(int c)
{       
        int asci;

        int asci = (int) c;
        if (asci >= 97 && asci <= 122)
	{
	return 1;
	}else if (asci >= 65 && asci <= 90)
	{
	return 1;
	}else
	{
	return 0;
	}
}
