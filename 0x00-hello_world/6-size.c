#include <stdio.h>
/**
 * main - Entry point
 * displays the size of data types in a computer
 * Return: Always 0 (Success)
 */

int main(void)
{
printf("the size of char = %lu bytes(s)\n", sizeof(char));
printf("the size of int = %lu bytes(s)\n", sizeof(int));
printf("the size of long = %lu bytes(s)\n", sizeof(long));
printf("the size of float = %lu bytes(s)\n", sizeof(float));

return (0);
}
