#include "hash_tables.h"

/**
 * hash_table_set - function that adds an element to the hash table
 *
 * @ht:- A pointer to the hash table
 * @key: The key to add - cannot be an empty string
 * @value: The value associated with key
 *
 * Return: 1 (success) or 0 (failure)
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int h;
	hash_node_t *new = NULL;
	hash_node_t *tmp = NULL;

	if (strcmp(key, "") == 0 || key == NULL || ht == NULL)
		return (0);
	if (value == NULL)
		return (0);

	h = key_index((unsigned char *)key, ht->size);
	new = malloc(sizeof(hash_node_t *));
	if (new == NULL)
		return (0);

	new->key = malloc(sizeof(char *));
	if (new->key == NULL)
		return (0);
	new->value = malloc(sizeof(char *));
	if (new->value == NULL)
		return (0);
	new->next = NULL;
	new->key = strdup(key);
	new->value = strdup(value);
	if (ht->array[h] == NULL || strcmp(ht->array[h]->key, key) == 0)
	{
		ht->array[h] = new;
		return (1);
	}
	else
	{
		tmp = ht->array[h];
		new->next = tmp;
		ht->array[h] = new;
		return (1);
	}
	return (0);
}
