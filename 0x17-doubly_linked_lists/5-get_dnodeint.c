#include "lists.h"

/**
 * get_dnodeint_at_index - function that gets the nth node of a list
 *
 * @head: the pointer to head node of list
 * @index: the position of node in the list
 *
 * Return: Address of nth node (success)
 *         NULL (failure)
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int count;

	count = 0;

	if (!head)
	{
		return (NULL);
	}

	temp = head;

	while (temp)
	{
		if (count == index)
		{
			return (temp);
		}
		count++;
		temp = temp->next;
	}
	return (NULL);
}
