#include "dog.h"
#include <stdlib.h>
/**
 * _vrconstant - a function that gets a length of string
 * @cst: the string to get the length
 *
 * Return: length of @cst
 */

int _vrconstant(const char *cst)
{
	int length = 0;

	while (*cst++)
		length++;
	return (length);
}

/**
 * _cstcopy -  a function that returns @decst with a copy
 * of a string from @cst
 *
 * @cst: string to copy
 * @decst: copy string to here
 *
 * Return: @decst
 */

char *_cstcopy(char *decst, char *cst)
{
	int m;

	for (m = 0; cst[m]; m++)
		decst[m] = cst[m];
	decst[m] = '\0';

	return (decst);
}

/**
 * new_dog -  a function that creates a new dog.
 * @name: the new dog name
 * @owner: the new owner dog name
 * @age: the new dog age
 *
 * if name and owner are empty and age is less than zero return null
 * Return: struct pointer dog, NULL if function fails
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	if (!name || age < 0 || !owner)
		return (NULL);

	dog = (dog_t *) malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (_vrconstant(name) + 1));
	if ((*dog).name == NULL)
	{
		free(dog);
		return (NULL);
	}

	dog->owner = malloc(sizeof(char) * (_vrconstant(owner) + 1));
	if ((*dog).owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}

	dog->name = _cstcopy(dog->name, name);
	dog->age = age;
	dog->owner = _cstcopy(dog->owner, owner);

	return (dog);
}
