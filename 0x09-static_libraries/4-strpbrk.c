#include <stdio.h>
#include <string.h>

/**
 * _strpbrk - Searches a string for any of a set of bytes
 * @s: Pointer to the input string to be scanned
 * @accept: Pointer to the string containing the bytes to match
 *
 * Return: Pointer to the first occurrence in s of any bytes in accept,
 * or NULL if no such byte is found
 */


char *_strpbrk(char *s, char *accept)
{

return (strpbrk(s, accept));
}
