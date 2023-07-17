#ifndef MAIN_H
#define MAIN_H
/**
 *struct dog - struct name
 *
 * @name: name of user
 *
 * @age: age of a person
 *
 * @owner: the owingt
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

dog_t *new_dog(char *name, float age, char *owner);

void free_dog(dog_t *d);

#endif
