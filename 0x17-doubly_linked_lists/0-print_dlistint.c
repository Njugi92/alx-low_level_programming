#include "lists.h"

/**
* dlistint_len - function counts the number of elements
* in a linked dlistint_t list.
* @h: The head of the dlistint_t list.
* Return: The number of elements in the dlistint_t list.
*/

size_t print_dlistint(const dlistint_t *h)
{
size_t nodes = 0;

while (h)
{
nodes++;
h = h->next;
}
return (nodes);
}
