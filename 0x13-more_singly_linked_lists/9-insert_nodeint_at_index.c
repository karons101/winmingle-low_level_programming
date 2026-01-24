#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: double pointer to the head of the list
 * @idx: index where the new node should be added (starting at 0)
 * @n: data to insert in the new node
 *
 * Return: address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned int i;
listint_t *new;
listint_t *temp = *head;

if (idx == 0)
return (add_nodeint(head, n));

for (i = 0; temp && i < idx - 1; i++)
{
temp = temp->next;
}

if (!temp)
return (NULL);

new = malloc(sizeof(listint_t));
if (!new)
return (NULL);

new->n = n;
new->next = temp->next;
temp->next = new;

return (new);
}
