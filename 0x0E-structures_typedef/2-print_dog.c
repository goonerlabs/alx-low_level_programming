#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_dog - prints a struct dog
 * @d: pointer the struct dog
 * Return: void
 */
void print_dog(struct dog *d)
{
	char n;

	if (d == NULL)
	{
		exit(1);
	}

	d->name = (d->name == NULL) ? "(nil)" : d->name;
	d->owner = (d->owner == NULL) ? "(nil)" : d->owner;

	
	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
