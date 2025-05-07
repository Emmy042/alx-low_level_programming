#include <stdio.h>
#include <string.h>

/**
 * _strspn - Gets the length of a prefix substring
 * @s: Pointer to the string to be scanned
 * @accept: Pointer to the string containing the list of characters to match
 *
 * Return: Number of bytes in the initial segment of s which consist
 * only of bytes from accept
 */


unsigned int _strspn(char *s, char *accept)
{

return (strspn(s, accept));
}
