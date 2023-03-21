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
 */

dog_t *new_dog(char *name, float age, char *owner)
{

	dog_t *new_dog;
	char *Cname, *Cowner;
	int lenName = 0, lenOwner = 0, i;

	if (name == NULL || owner == NULL)
		return (NULL);

	while (name[lenName])
		lenName++;

	while (owner[lenOwner])
		lenOwner++;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);

	Cname = malloc(lenName + 1);
	if (Cname == NULL)
		return (NULL);

	for (i = 0; name[i]; i++)
		Cname[i] = name[i];
	Cname[i] = '\0';

	Cowner = malloc(lenOwner + 1);
	if (Cowner == NULL)
		return (NULL);

	for (i = 0; owner[i]; i++)
		Cowner[i] = owner[i];
	Cowner[i] = '\0';

	new_dog->name = Cname;
	new_dog->age = age;
	new_dog->owner = Cowner;

	return (new_dog);

}
