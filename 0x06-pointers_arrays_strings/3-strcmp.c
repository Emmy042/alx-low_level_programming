#include <stdio.h>
#include <string.h>

/**
 * _strcmp - Compares two strings.
 * @s1: Pointer to the first string to compare.
 * @s2: Pointer to the second string to compare.
 *
 * Description: This function compares the two strings s1 and s2.
 *              It works exactly like the standard strcmp function,
 *              returning an integer less than, equal to, or greater
 *              than 0 if s1 is found, respectively, to be less than,
 *              to match, or be greater than s2.
 *
 * Return: An integer indicating the comparison result.
 */


int _strcmp(char *s1, char *s2)
{

int result;
result = strcmp(s1, s2);

return (result);
}
