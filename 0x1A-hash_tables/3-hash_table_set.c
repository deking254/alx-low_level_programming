#include "hash_tables.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
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
if (key == NULL || strlen(key) == 0)
return (0);
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
if (strcmp(key, hd[index]->key) == 0)
hd[index] = new;
new->next = hd[0];
hd[0] = new;
}
else
hd[index] = new;
return (1);
}
