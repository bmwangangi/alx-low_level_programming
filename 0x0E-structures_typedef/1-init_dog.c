#include "dog.h"

/**
 * init_dog - variable tp denote type pf struct dog initialized here
 * @d: this pointer denotes struct type of dog
 * @name: this pointer denotes the char name of the dog
 * @age: denotes the age of the dog
 * @owner: dog owner returns pointer
 * Return: not listed
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	        if (d)
		{
			d->name = name;
			d->age = age;
			d->owner = owner;
		}
}
