#include "hash_tables.h"

/**
 * hash_table_set - add element in hash table or update
 * @ht: pointer to the hash table
 * @key: key to add
 * @value: value of the key to add
 * Return: 1 on success, 0 on failure
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new;
	char *cpy_val;
	unsigned long int idx, i;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	cpy_val = strdup(value);
	idx = key_index((const unsigned char *)key, ht->size);

	for (i = idx; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = cpy_val;
			return (1);
		}
	}

		new = malloc(sizeof(hash_node_t));
		if (new == NULL)
		{
			free(cpy_val);
			return (0);
		}
		new->key = strdup(key);
		new->value = cpy_val;
		new->next = ht->array[idx];
		ht->array[idx] = new;
		return (1);
}
