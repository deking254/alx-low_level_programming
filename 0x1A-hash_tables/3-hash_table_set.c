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
unsigned long int index = key_index((const unsigned char *)key, 1024);
hash_node_t **hd;
char *newval = (char *)value;
hash_node_t *new;
new = malloc(sizeof(hash_node_t));
if (new)
{
new->key = (char *)key;
new->value = newval;
new->next = NULL;
}
hd = ht->array;
hd[0] = new;
printf("%s\n", hd[index]->key);
return (1);
}
