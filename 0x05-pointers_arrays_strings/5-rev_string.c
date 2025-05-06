#include <stdio.h>
#include "main.h"

/**
 * rev_string - Reverses a string in place
 * @s: The string to be reversed
 *
 * Return: Nothing (void)
 */

void rev_string(char *s)
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