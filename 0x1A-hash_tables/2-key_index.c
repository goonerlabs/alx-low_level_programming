#include "hash_tables.h"

/**
 * key_index - calculates an index of a given key
 * @key: the key
 * @size: size of the array
 * Return: the index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int i;

	i = hash_djb2(key) % size;
	return (i);
}
