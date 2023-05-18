#include "lists.h"

/**
 * dlistint_len - function that returns the number
 * of elements in a doubly linked list
 *
 * @h: the head of the doubly linked list
 * Return: the number of nodes in list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes_count = 0;
	const dlistint_t *temp;

	temp = h;
	while (temp)
	{
		temp = temp->next;
		nodes_count += 1;
	}
	return (nodes_count);
}
