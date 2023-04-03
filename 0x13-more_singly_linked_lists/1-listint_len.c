#include "lists.h"

/**
 * listint_len - check the code
 * @h: next.
 * Return: Always void.
 */
size_t listint_len(const listint_t *h)
{
size_t i;
for (i = 0; h != NULL; i++)
h = h->next;
return (i);
}
