#include "dog.h"
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
	d->name = name;
	d->age = age;
	d->owner = owner;
}
