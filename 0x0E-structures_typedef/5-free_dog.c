#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - Frees the memory allocated for a dog
 * @d: Pointer to the dog to free
 *
 * Description: This function frees the memory allocated for a dog.
 * It frees both the name and owner strings and then the dog structure itself.
 */
void free_dog(dog_t *d)
{
	    if (d == NULL)
		            return;

	        if (d->name != NULL)
			        free(d->name);

		    if (d->owner != NULL)
			            free(d->owner);

		        free(d);
}

