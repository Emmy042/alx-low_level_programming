#include <stdio.h>
#include <string.h>

/**
 * _strstr - Locates a substring in a string
 * @haystack: Pointer to the main string to be scanned
 * @needle: Pointer to the substring to find within haystack
 *
 * Return: Pointer to the beginning of the located substring,
 * or NULL if the substring is not found
 */


char *_strstr(char *haystack, char *needle)
{

return (strstr(haystack, needle));
}
