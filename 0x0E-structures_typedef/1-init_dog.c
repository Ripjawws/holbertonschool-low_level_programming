#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * init_dog - initialize
 *
 *
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d == NULL)
return;
d->name = name;
d->age = age;
d->owner = owner;
}