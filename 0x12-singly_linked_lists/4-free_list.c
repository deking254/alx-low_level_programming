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

for (ar = head; ar != NULL; )
{
save = ar->next;
free(ar);
if (save != NULL)
ar = save;
else
break;
}
}
