#include "dog.h"
#include <string.h>
#include <stdlib.h>
/**
 * new_dog - newname
 *
 * @name: the dogs name
 *
 * @age: dogs age;
 *
 * @owner: the owners name
 *
 * Return: new_dog (Success)
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);
	new_dog->name = strdup(name);
	new_dog->age = age;
	new_dog->owner = strdup(owner);
	return (new_dog);
}
