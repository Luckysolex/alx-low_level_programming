#include "lists.h"

/**
 * add_node - adds a new nodeat the
 * beginning of a list
 * @head: a pointer to the head of the list
 * @str: string to be added
 * Return: if the function fail - NULL
 * otherwise
 */

list_t *add_node(list_t **head, const char *str)
{
	char *dup;
	int len;
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	dup = strdup(str);
	if (dup == NULL)
	{
		free(new);
		return (NULL);
	}

	for (len = 0; str[len])
		len++;

	new->str = dup;
	new->len = len;
	new->next = *head;

	*head = new;

	return (new);
}