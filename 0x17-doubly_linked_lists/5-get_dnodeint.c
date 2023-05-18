#include <stdio.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - check the code
 * @head: hed
 * @index: i
 * Return: Always EXIT_SUCCESS.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
unsigned int i = 0;
while (head)
{
if (i != index)
{
if (head != NULL)
head = head->next;
else
break;
}
else
return (head);
i++;
}
return (NULL);
}
