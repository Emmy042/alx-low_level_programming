#include <stdio.h>
#include <string.h>
/**
 * reverse_array - Reverses the content of an array of integers.
 * @a: Pointer to the array of integers.
 * @n: Number of elements in the array.
 *
 * Description: This function reverses the order of elements in the
 *              array a. The first element becomes the last, the second
 *              becomes the second to last, and so on, in-place.
 *
 * Return: Nothing (void).
 */


void reverse_array(int *a, int n)
{
	int i, temp;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = temp;
	}
}
