#ifndef DOG_H
#define DOG_H

#include <stdlib.h>

/**
 *  * struct dog - Structure representing a dog
 *   * @name: The name of the dog
 *    * @age: The age of the dog
 *     * @owner: The owner of the dog
 *      *
 *       * Description: Structure that holds information about a dog
 *        */
typedef struct dog
{
	    char *name;
	        float age;
		    char *owner;
} dog_t;

/**
 *  * new_dog - Creates a new dog
 *   * @name: Name of the dog
 *    * @age: Age of the dog
 *     * @owner: Owner of the dog
 *      *
 *       * Return: Pointer to the new dog, NULL if the function fails
 *        */
dog_t *new_dog(char *name, float age, char *owner);

/**
 *  * free_dog - Frees the memory allocated for a dog
 *   * @d: Pointer to the dog to free
 *    *
 *     * Description: This function frees the memory allocated for a dog.
 *      */
void free_dog(dog_t *d);

#endif /* DOG_H */

