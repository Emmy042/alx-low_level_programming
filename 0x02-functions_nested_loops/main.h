#include <stdio.h>

void print_alphabet(void);

/**
 * print_alphabet - Prints the lowercase alphabet followed by a newline
 */

void print_alphabet(void)
{

char a = 'a';
while (a <= 'z')
{
putchar(a);
a++;

}
putchar('\n');

}