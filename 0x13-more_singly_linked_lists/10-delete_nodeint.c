#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
unsigned int i;
listint_t *tmp;
listint_t *nextsave;
tmp = *head;
if (index == 0)
{
nextsave = tmp->next;
free(tmp);
*head = nextsave;
}
else
{
for (i = 0; i < index; i++)
{
if (i == (index - 1))
{
nextsave = tmp->next->next;
free(tmp->next);
tmp->next = nextsave;
}
tmp = tmp->next;
}
}
if (tmp)
return (1);
else
return (-1);
}
