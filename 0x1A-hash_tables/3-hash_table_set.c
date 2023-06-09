#include "hash_tables.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * hash_table_set - check the code
 * @key: key
 * @ht: ht
 * @value: val
 * Return: Always EXIT_SUCCESS.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
hash_node_t **hd;
hash_node_t *new;
unsigned long int index;
char *newval = (char *)value;
new = malloc(sizeof(hash_node_t));
if (new)
{
new->key = (char *)key;
new->value = newval;
new->next = NULL;
}
else
return (0);
hd = ht->array;
index = key_index((const unsigned char *)key, ht->size);
if (hd[index])
{
hd[0] = new;
}
else
hd[index] = new;
free(new);
return (1);
}
