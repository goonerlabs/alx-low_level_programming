#include "hash_tables.h"

/**
 * hash_table_delete - frees a hash table
 * @ht: pointer to the hash table
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *tmp;
	hash_node_t *tmp1;
	unsigned long int i = 0;

	if (ht == NULL)
		return;

	while (i < ht->size)
	{
		tmp = ht->array[i];
		while (tmp != NULL)
		{
			tmp1 = tmp;
			tmp = tmp->next;
			free(tmp1->key);
			free(tmp1->value);
			free(tmp1);
		}
		i++;
	}
	free(ht->array);
	free(ht);
}
