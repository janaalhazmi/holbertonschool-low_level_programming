#include "hash_tables.h"

/**
 * hash_table_set - add/update
 * @ht: hash table
 * @key: key
 * @value: value
 *
 * Return: 1 success, 0 fail
 */
int hash_table_set(hash_table_t *ht, const char *key,
const char *value)
{
	hash_node_t *node, *tmp;
	unsigned long int index;
	char *dup_value;

	if (!ht || !key || !*key || !value)
		return (0);

	index = key_index((unsigned char *)key, ht->size);
	tmp = ht->array[index];

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

	node = malloc(sizeof(hash_node_t));
	if (!node)
		return (0);

	node->key = strdup(key);
	dup_value = strdup(value);

	if (!node->key || !dup_value)
		return (0);

	node->value = dup_value;
	node->next = ht->array[index];
	ht->array[index] = node;

	return (1);
}
