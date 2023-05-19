#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_dlistint - check the code
 * @head: hed
 * Return: Always EXIT_SUCCESS.
 */
void free_dlistint(dlistint_t *head)
{
int i = 0;
while (head)
{
free(head->prev);
if (head->next == NULL)
{
free(head);
break;
}
head = head->next;
i++;
}
}
