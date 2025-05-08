#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Adds positive numbers passed as arguments.
 * @argc: Argument count.
 * @argv: Array of argument strings.
 *
 * Description: This program adds all positive numbers provided as
 *              command-line arguments and prints the result,
 *              followed by a new line. If no arguments are given,
 *              it prints 0. If any argument contains non-digit
 *              symbols, it prints "Error" and returns 1.
 *
 * Return: 0 on success, 1 if a non-digit argument is found.
 */


int main(int argc, char *argv[])
{
int i, j, sum = 0;

if (argc < 2)
{
printf("0\n");
return (0);
}

for (i = 1; i < argc; i++)
{

for (j = 0; argv[i][j]; j++)
{
if (!isdigit(argv[i][j]))
{
printf("Error\n");
return (1);
}
}
sum += atoi(argv[i]);
}

printf("%d\n", sum);
    
return (0);
}
