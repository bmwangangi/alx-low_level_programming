#ifndef DOG_H
#define DOG_H

/**
 * struct dog - the data type as defined by the user
 * @name: the dog name 
 * @owner: the person who owns dog
 * @age: dog's age
 * author: KawiraSharon
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
