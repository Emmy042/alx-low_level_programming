#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - Prints the alphabets 10x followed by a newline
 */

void print_alphabet_x10(void)
{

char a;
int i;
while (i <= 10)
{

a = 'a';
while (a <= 'z')
{
_putchar(a);
a++;
}

i++;
_putchar('\n');
}

}
