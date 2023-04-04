#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint - function that frees a linked list
 *
 * @head: listint_t list to be freed
 *
 * Return: Nothing
 */

void free_listint(listint_t *head)
{
	listint_t *ptr;

	while (head)
	{
		ptr = head->next;
		free(head);
		head = ptr;
	}
}
