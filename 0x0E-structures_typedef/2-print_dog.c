#include <stdio.h>
#include "dog.h"

/**
 * print_dog - Prints the elements of a struct dog.
 * @d: Pointer to struct dog.
 */


void print_dog(struct dog *d)

{

printf("Name : %s \n", d->name);
printf("age : %f\n", d->age);
printf("owner : %s\n", d->owner);

}
