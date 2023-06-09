#include "hash_tables.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * hash_table_create - check the code for
 * @size: size
 * Return: Always EXIT_SUCCESS.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
hash_table_t *table;
table = malloc(sizeof(hash_table_t));
if (table != NULL)
{
table->size = size;
table->array = malloc(sizeof(void *) * size);
}
else
return (NULL);
return (table);
}
