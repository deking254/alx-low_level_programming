#include "lists.h"
/**
 * print_listint - check the code
 * @h: next.
 * Return: Always void.
 */
size_t print_listint(const listint_t *h)
{
size_t i;

for (i = 0; h != NULL; i++)
{
if (h->n)
printf("%d\n", h->n);
h = h->next;
}
return (i);
}
