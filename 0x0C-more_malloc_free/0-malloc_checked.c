#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - Allocates memory using malloc.
 * @b: Number of bytes to allocate.
 *
 * Return: Pointer to allocated memory, exits with 98 on failure.
 */

void *malloc_checked(unsigned int b)
{
int *p;
p = malloc(sizeof(*p) * b);
if (p == NULL)
{
exit(98);
}
return (p);
}

