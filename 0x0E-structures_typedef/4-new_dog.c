#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - This function creates a new dog structure
 *
 * @name: Dog's name
 * @age: Dog's age
 * @owner: Dog's owner
 *
 * Return: a pointer to new created dog structure
 * C for copy on Cname and Cowner
 *
 */

dog_t *new_dog(char *name, float age, char *owner)
{

	int n, lenName, lenOwner;
	struct dog *new_dog = NULL;

	lenName = 0;
	while (name[lenName] != '\0')
		lenName++;

	lenOwner = 0;
	while (owner[lenO] != '\0')
		lenOwner++;

	new_dog = malloc(sizeof(struct dog));
	if (new_dog == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	new_dog->name = malloc(lenName + 1);
	if (new_dog->name == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}

	new_dog->owner = malloc(lenO + 1);
	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog->owner);
		free(new_dog);
		return (NULL);
	}
	for (n = 0; n <= lenName; n++)
		new_dog->name[n] = name[n];
	for (n = 0; n <= lenOwner; n++)
		new_dog->owner[n] = owner[n];
	new_dog->age = age;
	return (new_dog);
}
