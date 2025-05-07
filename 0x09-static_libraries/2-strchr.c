#include <stdio.h>
#include <string.h>

/**
 * _strchr - Locates a character in a string
 * @s: Pointer to the string to search
 * @c: Character to locate in the string
 *
 * Return: Pointer to the first occurrence of the character c in the string s,
 * or NULL if the character is not found
 */


char *_strchr(char *s, char c)
{

return (strchr(s, c));

}
