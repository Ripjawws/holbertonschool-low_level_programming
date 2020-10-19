#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print dog - if its null print nill
 *@d: struct pointer
 *
 */

void print_dog(struct dog *d)
{
if (d == NULL)
{
return;
}

if (d->name != NULL)
{
printf("Name: %s\n", d->name);
}
else
{
printf("Name: (nil)\n");
}
printf("Age: %f\n", d->age);

if (d->owner != NULL)
{
printf("Owner: %s\n", d->owner);
}
else
{
printf("Owner: (nil)\n");
}
}
