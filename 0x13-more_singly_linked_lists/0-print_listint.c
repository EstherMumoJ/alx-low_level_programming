#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint - prints all the  elements of a `listint_t` list
 * @h: linked list head
 * listint_t - the constants 
 * Return:the number of nodes
 */


size_t print_listint(const listint_t *h)


{
	const listint_t *c;
	size_t count;

	for (c = h, count = 0; c != NULL; count++, c = c->next)
		printf("%d\n", c->n);

	return (count);
}
