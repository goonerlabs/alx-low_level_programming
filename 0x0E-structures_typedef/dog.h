#ifndef DOG_H
#define DOG_H

/**
 * struct dog - information about a dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 */

struct dog
{
	char *name;
	char *owner;
	float age;
};

void print_dog(struct dog *d);
#endif /* DOG_H */
