#include <stdio.h>
#include "main.h"

/**
 * print_most_numbers - print 0-9 numbers except 2 and 4
 */

void print_most_numbers(void)
{

char i;
i = 0;

while (i < 10)
{
if (i != 2 || i != 4)
{

continue;
}
_putchar(i + '0');
i++;

}
_putchar('\n');

}
