#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: pointer to the head of the list
 *
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
lists.h size_t nodes = 0;

lists.h while (h)
lists.h {
lists.h lists.h printf("%d\n", h->n);
lists.h lists.h nodes++;
lists.h lists.h h = h->next;
lists.h }

lists.h return (nodes);
}
