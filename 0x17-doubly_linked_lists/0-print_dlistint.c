#include "lists.h"

/**
 * print_dlistint - function that prints all the
 * elements of a doubly linked list
 *
 * @h: the head of the doubly linked list
 * Return: the number of nodes in list
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t nodes_count = 0;
	const dlistint_t *temp;

	temp = h;
	while (temp)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		nodes_count += 1;
	}
	return (nodes_count);
}
