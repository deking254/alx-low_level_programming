#include "lists.h"

/**
 * free_listint - check the code
 * @head: braiin.
 * Return: Always 0.
 */
void free_listint(listint_t *head)
{
listint_t *save;
save = head;
if (head != NULL)
{
while (head->next != NULL)
{
head = head->next;
free(save);
save = head;
}
}
}
