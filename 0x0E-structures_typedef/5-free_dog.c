#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees up memory allocated to the struct dog
 * @d: pointer to the struct
 * Return: void
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
