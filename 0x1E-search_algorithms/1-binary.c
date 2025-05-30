#include "search_algos.h"
#include <stdio.h>

/**
 * binary_search - Searches for a value in a sorted array using binary search
 * @array: Pointer to the first element of the array
 * @size: Number of elements in the array
 * @value: Value to search for
 *
 * Return: Index where value is found, or -1 if not found or NULL
 */


int binary_search(int *array, size_t size, int value)
{

int left;
int right;
int middle;
int i;

left = 0;
right = (int)size - 1;


if (array == NULL )
{
return (-1);
}

while (left <= right)
{

printf("Searching in array: ");
for (i = left; i <= right; i++)
{
printf("%d", array[i]);
if (i < right)
printf(", ");
}
printf("\n");

middle = (left + right) / 2;

if (value == array[middle])
{
return (middle);
}
    
else if (value < array[middle])
{
right = middle - 1;
}

else
{
left = middle + 1;
}

}

return (-1);

}
