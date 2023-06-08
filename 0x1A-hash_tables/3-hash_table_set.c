#include "hash_tables.h"

/**
 * hash_table_set - check the code
 * @key: key
 * @ht: ht
 * @value: val
 * Return: Always EXIT_SUCCESS.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
hash_node_t *hd;
hd = ht->array[0];
hd->key = (char *)key;
hd->value = (char *)value;
return (1);
}
