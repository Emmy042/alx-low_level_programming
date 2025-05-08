#include <stdio.h>

/**
 * main - Prints the number of arguments passed into the program.
 * @argc: Argument count.
 * @argv: Array of argument strings (unused).
 *
 * Description: This program prints the number of arguments passed to it,
 *              excluding the program name itself. The output is followed
 *              by a new line.
 *
 * Return: Always 0 (Success).
 */


int main(int argc, __attribute__((unused))char *argv[])
{

printf("%d\n", argc);

return (0);
}

