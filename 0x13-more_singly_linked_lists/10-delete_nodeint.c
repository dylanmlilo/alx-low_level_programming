#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - function that deletes a node in a linked list
 *                           at a certain index
 *
 * @head: pointer to the first element in the list
 * @index: index of the node to delete
 *
 * Return: 1 (Success), or -1 (Fail)
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *ptr = *head;
	listint_t *current = NULL;

	i = 0;

	if (*head == NULL)
	{
		return (-1);
	}

	if (index == 0)
	{
		*head = (*head)->next;
		free(ptr);
		return (1);
	}

	while (i < index - 1)
	{
		if (!ptr || !(ptr->next))
		{
			return (-1);
		}

		ptr = ptr->next;
		i++;
	}

	current = ptr->next;
	ptr->next = current->next;
	free(current);

	return (1);
}
