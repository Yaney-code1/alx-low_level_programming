#include "lists.h"
/**
 * listint_len - a function that returns the number of elements in a list
 * @h: the head of the linked list
 * Return: the number of elements
 */
size_t listint_len(const listint_t *h)
{
size_t count = 0;
if (h == NULL)
	return (0);
for (count = 0; h != NULL; count++)
{
h = h->next;
}
return (count);
}
