#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
void free_dlistint(dlistint_t *head)
{
int i = 0, j = 0;
dlistint_t *ne = head;
while (ne)
{
ne = ne->next;
i++;
}
for (j = 0; j <= i; j++)
{
free(head->prev);
head = head->next;
}
free(head);
}
