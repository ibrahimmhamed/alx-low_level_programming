#include "dog.h"

/**
 * init_dog - function that initialize a variable of type struct dog
 *
 * @d: input
 * @name: the name of dog
 * @age: the age of dog
 * @owner: the owner of dog
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}
