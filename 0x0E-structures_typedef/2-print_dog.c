#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_dog - intializes dog
 * @d: pointer
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
		d->name = "(nill)";
	if (d->owner == NULL)
		d->owner = "(nill)";
	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}