#include <stdio.h>
#include "lists.h"

/**
 * print_listint - Prints all elements of a listint_t list.
 * @h: Pointer to the head of the list.
 *
 * Return: Number of nodes.
 */

size_t print_listint(const listint_t *h)
{
size_t count = 0;

while (h != NULL)
{
if (h == NULL)
printf("[0] (nil)\n");
else
printf("%d\n", h->n);

h = h->next;
count++;
}



return (count);

}
