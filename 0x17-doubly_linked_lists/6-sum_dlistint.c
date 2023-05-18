#include <stdio.h>
#include "lists.h"

/**
 * sum_dlistint - check the code
 * @head: h
 * Return: Always EXIT_SUCCESS.
 */
int sum_dlistint(dlistint_t *head)
{
int sum = 0;
while (head)
{
sum += head->n;
head = head->next;
}
return (sum);
}
