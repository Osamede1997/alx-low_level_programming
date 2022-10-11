#include "dog.h"
#include <stdio.h>

void print_dog(struct dog *d)
{
if (d == NULL)
{
return;
}
if (d->name == NULL)
{
printf("Name: (nil)\n");
}
else
{
printf("Name: \n", d->name);
}

printf("Age: \n", d->age);

if (d->owner == NULL)
{
printf("Owner: (nil)\n")
}
else
{
printf("Owner: \n", d->owner);
}

}
