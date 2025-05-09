#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - Concatenates two strings using standard strcat functions.
 * @s1: First string.
 * @s2: Second string.
 * @n: Number of bytes from s2 to concatenate.
 *
 * Return: Pointer to newly allocated memory with s1 followed by first n bytes of s2.
 *         NULL on failure.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *result;
unsigned int len1, len2;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

len1 = strlen(s1);
len2 = strlen(s2);

if (n > len2)
n = len2;

result = malloc(len1 + n + 1);
if (result == NULL)
return (NULL);

strcpy(result, s1);
strncat(result, s2, n);

return (result);
}

