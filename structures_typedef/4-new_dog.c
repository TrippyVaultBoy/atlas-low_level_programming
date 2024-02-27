#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * _strlen- returns the length of a string
 * @s: string entered
 *
 * Return: length of string
 */

int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		s++;
		length++;
	}
	return (length);
}

/**
 * dog_t *new_dog- creates a new dog
 * @name: name of new dog
 * @age: age of new dog
 * @owner: owner of new dog
 */

/**
 * *_strcpy- copies a string
 * @dest: buffer to coppy string to
 * @src: input string
 *
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}

dog_t *new_dog(char *name, float age, char *owner)
{
	int lname;
	int lowner;

	struct dog *new_dog;

	new_dog = malloc(sizeof(struct dog));

	lname = _strlen(name);

		new_dog->name = malloc(sizeof(char) * (lname));

		new_dog->name = *_strcpy(new_dog->name, name);

	new_dog->age = age;

	lowner = _strlen(owner);

		new_dog->owner = malloc(sizeof(char) * lowner);

		new_dog->owner = _strcpy(new_dog->owner, owner)

		return (new_dog);
}

