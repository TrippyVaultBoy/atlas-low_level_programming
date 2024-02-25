#ifndef DOG_H_
#define DOG_H_
/**
 * struct dog- includes data for dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 */

struct dog
{
	char *name[50];
	float age;
	char *owner[50];
};

char *_strncpy(char *dest, char *src, int n);
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
