#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _strlen - returns the length of a string
 * @s: string s
 * Return: length of string
 */
int _strlen(char *s)
{
  int i = 0;

  while (*s++)
    i++;

  return (i);
}

/**
 * _strcpy - Entry point
 * Description: copy a string to another string.
 * @dest:  str is to be printed after copying.
 * @src: source of string
 *
 * Return: no return.
 */
char *_strcpy(char *dest, char *src)
{
  int i;

  for (i = 0; *(src + i) != '\0'; i++)
    {
      *(dest + i) = *(src + i);
    }
  *(dest + i) = '\0';
  return (dest);
}

/**
 *
 *
 *
 */
dog_t *new_dog(char *name, float age, char *owner)
{
char *newname1;
char *newowner1;
dog_t *new_dog;
if (name == NULL || owner == NULL)
return (NULL);
new_dog = malloc(sizeof(dog_t));
if (new_dog == NULL)
return (NULL);
newname1 = malloc(sizeof(char) * _strlen(name) + 1);
if (newname1 == NULL)
{
free(new_dog);
return (NULL);
}
_strcpy(newname1, name);
newowner1 = malloc(sizeof(char) * _strlen(owner) + 1);
if (newowner1 == NULL)
{
free(newname1);
free(new_dog);
return (NULL);
}
_strcpy(newowner1, owner);
new_dog->name = newname1;
new_dog->age = age;
new_dog->owner = newowner1;
return new_dog;
}
