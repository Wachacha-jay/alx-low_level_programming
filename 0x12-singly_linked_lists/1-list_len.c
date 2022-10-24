#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * list_len - length of list_t struct
 *
 * @h: head node
 *
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
