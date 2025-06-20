#include <stdio.h>
#include "main.h"

/**
 * _puts_recursion - Prints a string, followed by a new line.
 * @s: Pointer to the string to be printed.
 *
 * Description: This function prints a string using recursion,
 *              character by character, and appends a newline
 *              character after the last character of the string.
 *
 * Return: Nothing (void).
 */

void _puts_recursion(char *s)
{

if (*s == '\0')
{
_putchar('\n');
return;
}

_putchar(*s);
_puts_recursion(s + 1);

}
