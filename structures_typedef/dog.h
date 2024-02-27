#ifndef DOG_H_
#define DOG_H_
/**
 * struct dog- includes data for dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

char *_strncpy(char *dest, char *src, int n);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);

#endif
