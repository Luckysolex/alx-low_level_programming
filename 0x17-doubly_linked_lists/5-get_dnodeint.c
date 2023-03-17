#include "lists.h"
/**
 * get_dnodeint_at_index - returns the nth node of list
 * @head: head of the list
 * @index: index of the node
 *
 * Return: the nth node of the list or NULL if node does not exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int check = 0;

	while (check < index)
	{
		if (head != NULL)
		{
			head = head->next;
			check++;
		}
		else
		{
			return (NULL);
		}
	}
	return (head);
}
