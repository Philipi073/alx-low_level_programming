#include "lists.h"
/**
 * listint_len - returns number of elements in listint list
 * @h: pointer to firts node
 *
 *  Return: no of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 1;

	if (h == NULL)
		return (0);
	while (h->next != NULL)
	{
		if (h->n != '\0')
			count++;
		h = h->next;
	}
	return (count);
}
