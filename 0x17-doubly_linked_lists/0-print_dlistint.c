#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
  * print_dlistint - print elements for list
  * @h: head of list
  * Return: nodes
  */
size_t print_dlistint(const dlistint_t *h)
{
	int count;

	if (h == NULL)
	{
		return (count);
	}
	while (h->prev != NULL)
	{
		h = h->prev;
	}
	while (h != NULL)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}
	return (count);
}
