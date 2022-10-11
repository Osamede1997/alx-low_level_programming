#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - get length of string
 * @s: parameter tested
 * Return: length of string
 */

int _strlen(char *s)
{
int len;
len = 0;

while (*s != 0)
{
s++;
len++;
}
return (len);
}

/**
 * *_strcpy - copies a string
 * @src: parameter tested
 * @dest: paremeter tested
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
int i = 0;
while (src[i] != '\0')
{
dest[i] = src[i];
i++;
}
dest[i] = '\0';
return (dest);
}



/**
 * new_dog - creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *dog;
int len1, len2;

len1 = _strlen(name);
len2 = _strlen(owner);

dog = malloc(sizeof(dog_t));

if (doggo == NULL)
{
return (NULL);
}

dog->name = malloc(sizeof(char) * (len1 + 1));
if (dog->name == NULL)
{
return (NULL);
}

dog->owner = malloc(sizeof(char) * (len2 + 1));
if (dog->name == NULL)
{
return (NULL);
}

_strcpy(dog->name, name);
_strcpy(dog->owner, owner);
dog->age = age;

return (dog);
}
