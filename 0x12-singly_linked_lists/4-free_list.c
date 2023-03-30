#include "lists.h"

/**
 * free_list - check the code
 * @head: head.
 * Return: Always 0.
 */
void free_list(list_t *head)
{
list_t *ar;
list_t *save;
if (head != NULL)
{
for (ar = head; ar.next != NULL; )
{
save = ar->next;
free(ar);
ar = save;
}
}
}
