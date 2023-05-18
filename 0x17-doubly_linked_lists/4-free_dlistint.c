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
int i = 0;
while (head)
{
if (head != NULL)
{
free(head->prev);
}
else
{
free(head);
}
head = head->next;
i++;
}
}
