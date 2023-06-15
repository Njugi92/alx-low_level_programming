#include "lists.h"

/**
 * dlistint_len - Function counts the number of elements in a
 * linked dlistint_t list.
 * @h: the head of the dlistint_t list
 *
 * Return: Number of elements in the dlistint_t list
 */
size_t dlistint_len(const dlistint_t *h)
{
size_t n = 0;

while (h)
{
n++;
h = h->next;
}
return (n);
}
