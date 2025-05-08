#include <stdio.h>

/**
 * main - Prints all arguments passed to the program.
 * @argc: Argument count.
 * @argv: Array of argument strings.
 *
 * Description: This program prints each argument it receives,
 *              including the program name, one per line.
 *
 * Return: Always 0 (Success).
 */

int main(int argc, char *argv[])
{

int i = 0;
while (i < argc)
{
printf("%s\n", argv[i]);
i++;
}
return (0);
}
