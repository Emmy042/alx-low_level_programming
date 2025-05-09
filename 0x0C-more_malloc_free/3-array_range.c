#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - Creates an array of integers from min to max.
 * @min: Minimum value (included).
 * @max: Maximum value (included).
 *
 * Return: Pointer to array, or NULL on failure.
 */


int *array_range(int min, int max)
{

int *pt, i, size;
if (min > max)
{
return(NULL);
}

size = max - min + 1;

pt = malloc((sizeof(*pt) * max));

if (pt == NULL)
{
return (NULL);
}

for (i=0; i< size; i++)
{
pt[i] = min + 1;

}
return (pt);

}