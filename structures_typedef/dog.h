#ifndef _DOG_H_
#define _DOG_H_

#include <stdio.h>
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
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
