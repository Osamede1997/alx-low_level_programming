#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - function to initialize variable
 * @d: struct dog
 * @name: string
 * @age: float
 * @owner: string
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
    if (d != NULL)
    {
        d->name = name;
        d->age = age;
        d->owner = owner;
    }
}
