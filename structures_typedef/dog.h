#ifndef _DOG_H_
#define _DOG_H_

#include <stdio.h>
#include <stdlib.h>
/**
 *struct dog - task0
 *@name:char
 *@age:float
 *@owner:char
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
void free_dog(dog_t *d);
dog_t *new_dog(char *name, float age, char *owner);
char *_strdup(char *str);
#endif
