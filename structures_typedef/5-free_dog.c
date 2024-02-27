#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * free_dog- frees dogs
 * @d: pointer
 *
 * Return: void
 */

void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d->age);
	free(d);
}