#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * sum_listint - function that calculates the sum of all the data in a list
 *
 * @head: first node in the linked list
 *
 * Return: sum (success)
 */

int sum_listint(listint_t *head)
{
	int sum;
	listint_t *ptr = head;

	sum = 0;

	while (ptr)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}

	return (sum);
}
