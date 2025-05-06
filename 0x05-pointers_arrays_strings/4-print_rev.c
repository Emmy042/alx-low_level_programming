#include <stdio.h>
#include "main.h"

/**
 * print_rev - Prints a string in reverse followed by a new line
 * @s: The string to be reversed
 *
 * Return: void
 */


void print_rev(char *s)
{
int i = 0;

/* Find the length of the string */
while (s[i] != '\0')
{
i++;
}

/* Print the string in reverse */
while (i--)
{
printf("%c", s[i]);

}
printf("\n");

}

