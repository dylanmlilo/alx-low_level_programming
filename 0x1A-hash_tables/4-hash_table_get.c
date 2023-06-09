#include "hash_tables.h"

/**
 * hash_table_get - function that retrieve the value associated with
 *                  a key in a hash table
 *
 * @ht: A pointer to the hash table
 * @key: The key to get the value of
 *
 * Return: the value associated with key in ht
 *         NULL If the key cannot be matched
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int i;
	hash_node_t *tmp = NULL;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	i = key_index((const unsigned char *)key, ht->size);
	if (i >= ht->size)
		return (NULL);

	tmp = ht->array[i];
	while (tmp && strcmp(tmp->key, key) != 0)
		tmp = tmp->next;

	return ((tmp == NULL) ? NULL : tmp->value);
}
