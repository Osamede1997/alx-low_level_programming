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

while (s[len] != '\0')
{
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
dog_t *doggo;
int len1, len2;

len1 = _strlen(name);
len2 = _strlen(owner);

doggo = malloc(sizeof(dog_t));

if (doggo == NULL)
{
return (NULL);
}

doggo->name = malloc(sizeof(char) * (len1 + 1));
if (doggo->name == NULL)
{
free(doggo);
return (NULL);
}

doggo->owner = malloc(sizeof(char) * (len2 + 1));
if (doggo->name == NULL)
{
free(doggo);
free(doggo->name);
return (NULL);
}

_strcpy(doggo->name, name);
_strcpy(doggo->owner, owner);
doggo->age = age;

return (doggo);
}
