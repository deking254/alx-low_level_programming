#include <stdio.h>

void first_printer(void) __attribute__ ((constructor));

/**
 * first_printer - prints a sentence before the main
 * function is executed
 */
void first_printer(void)
{
printf("You're beat! and yet, you must allow,\n");
printf("I bore my house upon my back!\n");
}

