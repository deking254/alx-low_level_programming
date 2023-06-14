#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_delete - check the code
 * @ht: table
 * Return: Always EXIT_SUCCESS.
 */
void hash_table_delete(hash_table_t *ht)
{
hash_node_t *node, *tmp;
unsigned long int i;
if (ht)
{
for (i = 0; i < ht->size; i++)
{
node = ht->array[i];
while (node != NULL)
{
tmp = node;
node = node->next;
if (tmp->key)
free(tmp->key);
if (tmp->value)
free(tmp->value);
free(tmp);
}
}
free(ht->array);
free(ht);
}
}
