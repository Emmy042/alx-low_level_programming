#include <stdio.h>
#include "main.h"

/**
 * _print_rev_recursion - Prints a string in reverse.
 * @s: Pointer to the string to be printed in reverse.
 *
 * Description: This function uses recursion to print each character
 *              of the string in reverse order, without modifying the
 *              original string.
 *
 * Return: Nothing (void).
 */

void _print_rev_recursion(char *s)
{

if (*s == '\0')
{
_putchar('\n');
return;
}

_print_rev_recursion(s + 1);
_putchar(*s);
}
