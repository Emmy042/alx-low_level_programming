#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - Creates a new dog.
 * @name: Dog's name.
 * @age: Dog's age.
 * @owner: Dog's owner.
 *
 * Return: Pointer to new dog_t, or NULL on failure.
 */


dog_t *new_dog(char *name, float age, char *owner)
{

dog_t *d;
d -> name = name;
d -> age = age;
d -> owner = owner;

if (d == NULL)
{
return (NULL);
}

}
