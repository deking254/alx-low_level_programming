#include "lists.h"
/**
 * insert_nodeint_at_index - check the code
 * @head: g
 * @idx: h
 * @n: n
 * Return: Always 0.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *ins;
listint_t *tmp;
unsigned int i;

tmp = *head;
ins = malloc(sizeof(listint_t));
if (idx == 0 && ins != NULL)
{
ins->n = n;
ins->next = tmp;
*head = ins;
}
else
return (NULL);
for (i = 0; i < idx; i++)
{
if (tmp != NULL && ins != NULL)
{
if (i == (idx - 1))
{
ins->n = n;
ins->next = tmp->next;
tmp->next = ins;
}
tmp = tmp->next;
}
else
return (NULL);
}
return (tmp);
}
