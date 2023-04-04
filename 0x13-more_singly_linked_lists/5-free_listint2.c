#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - function that frees a linked list
 *
 * @head: pointer to the listint_t list to be freed
 *
 * Return: Nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *ptr;

	if (head == NULL)
	{
		return;
	}

	while (*head)
	{
		ptr = (*head)->next;
		free(*head);
		*head = ptr;
	}
	*head = NULL;
}
