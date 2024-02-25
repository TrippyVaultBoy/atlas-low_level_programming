#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * struct init_dog- initialises data of dog
 * @name: name of the dog
 * @age of the dog
 * @owner: owner of the dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
}	}
