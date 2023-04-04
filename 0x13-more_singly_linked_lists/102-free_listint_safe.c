#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint_safe - function that frees a linked list
 *
 * @h: pointer to the first node in the linked list
 *
 * Return: number of elements in the freed list
 */

size_t free_listint_safe(listint_t **h)
{
	size_t length;
	int difference;
	listint_t *ptr;

	length = 0;

	if (!h || !*h)
	{
		return (0);
	}

	while (*h)
	{
		difference = *h - (*h)->next;
		if (difference > 0)
		{
			ptr = (*h)->next;
			free(*h);
			*h = ptr;
			length++;
		}
		else
		{
			free(*h);
			*h = NULL;
			length++;
			break;
		}
	}
	*h = NULL;

	return (length);
}
