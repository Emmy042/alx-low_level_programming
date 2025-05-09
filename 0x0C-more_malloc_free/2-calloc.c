#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - Allocates memory for an array and sets it to zero.
 * @nmemb: Number of elements.
 * @size: Size of each element.
 *
 * Return: Pointer to allocated memory, or NULL on failure.
 */


void *_calloc(unsigned int nmemb, unsigned int size)
{

void *p;

if (nmemb == 0 || size == 0)
{
return (NULL);
}

p = malloc(nmemb * size);
memset(p, 0, nmemb * size);


if (p == NULL)
{
return (NULL);
}
return (p);

}
