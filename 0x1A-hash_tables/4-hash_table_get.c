#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value from a hash table
 * @ht: A pointer to the hash table
 * @key: The key
 *
 * Return: the value or NULL (if key couldn’t be found)
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int i;
	hash_node_t *tmp;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	i = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[i];
	while (tmp)
	{
		if (strcmp(tmp->key, key) == 0)
			return (tmp->value);
		tmp = tmp->next;
	}
	return (NULL);
}
