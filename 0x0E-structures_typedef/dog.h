#ifndef DOG_H
#define DOG_H

/**
 * struct dog - new type struct
 * @name: string
 * @age: float
 * @owner: string
 */

typedef struct dog
{
    char *name;
    float age;
    char *owner;
}dog;

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
