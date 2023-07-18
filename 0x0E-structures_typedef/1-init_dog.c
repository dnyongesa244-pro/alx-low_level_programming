#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - function to allocate
 *
 * @name: dogs name
 *
 * @age: dogs age
 *
 * @owner: dogs owner
 *
 * @d: new type
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
