#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initializes a variable of type struct dog
 * @d: pointer the struct dog
 * @name: the dog's name
 * @age: the dog's age
 * @owner: the owners name
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == Null)
	{
		d = malloc(sizeof(struct dog));
	}
	d->name = name;
	d->age = age;
	d->owner = owner;
}
