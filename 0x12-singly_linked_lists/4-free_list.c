#include "lists.h"

/**
 * free_list - check the code
 * @head: head.
 * Return: Always 0.
 */
void free_list(list_t *head)
{
list_t *save;
while (head.next != NULL)
{
save = head->next;
free(head);
head = save;
}
}

