#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - Concatenates two strings into a newly allocated memory space.
 * @s1: First string.
 * @s2: Second string.
 *
 * Description: This function creates a new string that contains the contents
 *              of s1 followed by the contents of s2, and null-terminates the result.
 *              If NULL is passed for s1 or s2, it is treated as an empty string.
 *              Memory is dynamically allocated and should be freed when no longer needed.
 *              Returns NULL on memory allocation failure.
 *
 * Return: Pointer to the newly created concatenated string, or NULL on failure.
 */

#include <stdlib.h>
#include <string.h>

/**
 * str_concat - Concatenates two strings into a newly allocated string.
 * @s1: First string.
 * @s2: Second string.
 *
 * Return: Pointer to new string containing s1 followed by s2,
 *         or NULL on failure.
 */
char *str_concat(char *s1, char *s2)
{
char *st;
int len1 = 0, len2 = 0, i, j;

if (s1 == NULL)
s1 = "";

if (s2 == NULL)
s2 = "";

len1 = strlen(s1);
len2 = strlen(s2);

st = malloc((len1 + len2 + 1) * sizeof(char));
if (st == NULL)
return (NULL);

/* Copy s1 into st */
for (i = 0; i < len1; i++)
st[i] = s1[i];

	/* Append s2 to st */
for (j = 0; j < len2; j++)
st[i + j] = s2[j];

st[i + j] = '\0';  /* Null-terminate the result */

return (st);
}

