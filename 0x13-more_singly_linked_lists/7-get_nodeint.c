#include "lists.h"

/**
 * get_nodeint_at_index - check the code
 * @head: h
 * @index: i
 * Return: Always 0.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int i;
listint_t *tmp;
tmp = head;
for (i = 0; i < index; i++)
{
if (tmp)
tmp = tmp->next;
else
break;
}
if (tmp)
return (tmp);
else
return (NULL);
}
