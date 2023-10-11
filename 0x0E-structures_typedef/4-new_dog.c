#include "dog.h"
#include <stdlib.h>

/**
 * _strlen - function that get the lenght of string
 *
 * @str: string
 *
 * Return: (length) of string
*/

int _strlen(const char *str)
{
	int length = 0;

	while (*str++)
	{
		length++;
	}
	return (length);
}

/**
 * *_strcopy - function that copies the string pointed to by src
 *
 * @dest: the destination buffer
 * @src: the source string to be copied
 *
 * Return: (dest)
*/

char *_strcopy(char *dest, char *src)
{
	int x;

	for (x = 0; src[x]; x++)
	{
		dest[x] = src[x];
	}
	dest[x] = '\0';

	return (dest);
}

/**
 * *new_dog - function that creates a new dog
 *
 * @name: the name of dog
 * @age: the age of dog
 * @owner: the owner of dog
 *
 * Return: (NULL) if the function fails, otherwise struct (dog)
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	if (!name || age < 0 || !owner)
		return (NULL);

	dog = (dog_t *) malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if ((*dog).name == NULL)
	{
		free(dog);
		return (NULL);
	}

	dog->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if ((*dog).owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}

	dog->name = _strcopy(dog->name, name);
	dog->age = age;
	dog->owner = _strcopy(dog->owner, owner);

	return (dog);
}
