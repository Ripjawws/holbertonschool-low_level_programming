#include "hash_tables.h"
/**
 * hash_table_delete - function that adds an element to the hash table
 * @ht: is the hash table you want to add or update the key/value to
 * Return: 1 if it succeeded, 0 otherwise
 */
void hash_table_delete(hash_table_t *ht)
{
unsigned int i = 0;
hash_node_t *tmp, *tmp2;

if (ht == NULL)
return;

for (i = 0; i < ht->size; i++)
{
if (ht->array[i] != NULL)
{
for (tmp = ht->array[i]; tmp;)
{
tmp2 = tmp;
tmp = tmp->next;
free(tmp2->key);
free(tmp2->value);
free(tmp2);
tmp2 = NULL;
}
}
}
free(ht->array);
free(ht);
ht = NULL;
}
