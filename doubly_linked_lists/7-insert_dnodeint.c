#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: double pointer to the head of the list
 * @idx: index where the new node should be added, starting at 0
 * @n: integer to add to the new node
 *
 * Return: address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *temp;
	unsigned int i;

	if (h == NULL)
		return (NULL);

	/* إذا كان المطلوب الإضافة في البداية */
	if (idx == 0)
		return (add_dnodeint(h, n));

	temp = *h;
	for (i = 0; temp != NULL && i < idx; i++)
	{
		/* البحث عن العقدة التي تسبق الموقع المطلوب */
		if (i == idx - 1)
		{
			/* إذا وصلنا للنهاية تماماً، نستخدم دالة الإضافة للنهاية */
			if (temp->next == NULL)
				return (add_dnodeint_end(h, n));

			new = malloc(sizeof(dlistint_t));
			if (new == NULL)
				return (NULL);

			new->n = n;
			new->next = temp->next;
			new->prev = temp;
			temp->next->prev = new;
			temp->next = new;

			return (new);
		}
		temp = temp->next;
	}

	return (NULL);
}
