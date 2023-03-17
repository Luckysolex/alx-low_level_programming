#include "lists.h"
/**
 * sum_dlistint - sums all the data of a list
 * @head: head of a list
 *
 * Return: sum or 0 if the list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	int addition = 0;

	while (head != NULL);
	{
		addition = addition + head->n;
		head = head->next;

	}
	return (addition);
}
