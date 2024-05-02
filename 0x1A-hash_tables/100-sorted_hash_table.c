#include "hash_tables.h"

/**
 * shash_table_create - Creates a hash table
 * @size: size of the array
 * Return: pointer to the hash table
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *h;
	unsigned long int i;

	h = malloc(sizeof(shash_table_t));
	if (h == NULL)
		return (NULL);

	h->size = size;
	h->array = malloc(sizeof(shash_node_t *) * size);
	if (h->array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		h->array[i] = NULL;

	return (h);
}

/**
 * shash_table_set - Adds an element to the hash table
 * @ht: pointer to the hash table
 * @key: The key to add
 * @value: The value to add
 * Return: 1 if suscessful and 0 otherwise
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int i;
	shash_node_t *new, *tmp;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	i = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[i];
	while (tmp)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			free(tmp->value);
			tmp->value = strdup(value);
			return (1);
		}
		tmp = tmp->next;
	}
	new = malloc(sizeof(shash_node_t));
	if (new == NULL)
		return (0);
	new->key = strdup(key);
	if (new->key == NULL)
	{
		free(new);
		return (0);
	}
	new->value = strdup(value);
	if (new->value == NULL)
	{
		free(new->key);
		free(new);
		return (0);
	}
	new->next = ht->array[i];
	ht->array[i] = new;
	
	if (ht->shead == NULL)
	{
		new->sprev = NULL;
		new->snext = NULL;
		ht->shead = new;
		ht->stail = new;
	}
	else if (strcmp(ht->shead->key, key) > 0)
	{
		new->sprev = NULL;
		new->snext = ht->shead;
		ht->shead->sprev = new;
		ht->shead = new;
	}
	else
	{
		tmp = ht->shead;
		while (tmp->snext != NULL && strcmp(tmp->snext->key, key) < 0)
			tmp = tmp->snext;
		new->sprev = tmp;
		new->snext = tmp->snext;
		if (tmp->snext != NULL)
			tmp->snext->sprev = new;
		else
			ht->stail = new;
		tmp->snext = new;
	}
	return (1);
}

/**
 * shash_table_get - gets a value from a hash table
 * @ht: pointer to the hash table
 * @key: The key
 * Return: the value or NULL
 */

char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int i;
	shash_node_t *tmp;

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

/**
 * shash_table_print - Prints the elements in a hash table
 * @ht: pointer to the hash table
 * Return: void
 */

void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *tmp;
	char *sep = "";

	if (ht == NULL)
		return;

	printf("{");
	for (tmp = ht->shead; tmp != NULL; tmp = tmp->snext)
	{
		printf("%s'%s': '%s'", sep, tmp->key, tmp->value);
		sep = ", ";
	}
	printf("}\n");

}

/**
 * shash_table_print_rev - Prints the elements in a hash table in reverse
 * @ht: pointer to the hash table
 * Return: void
 */

void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *tmp;
	char *sep = "";

	if (ht == NULL)
		return;

	printf("{");
	for (tmp = ht->stail; tmp != NULL; tmp = tmp->sprev)
	{
		printf("%s'%s': '%s'", sep, tmp->key, tmp->value);
		sep = ", ";
	}
	printf("}\n");
}


/**
 * shash_table_delete - frees a hash table
 * @ht: pointer to the hash table
 * Return: void
 */

void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *tmp;
	shash_node_t *tmp1;
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











