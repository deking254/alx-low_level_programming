#include "lists.h"

/**
 * print_listint - check the code
 * @h: next.
 * Return: Always void.
 */
size_t print_listint(const listint_t *h)
{
size_t i;

i = 0;
while (h)
{
printf("%d\n", h->n);
i++;
h = h->next;
}
return (i);
}
