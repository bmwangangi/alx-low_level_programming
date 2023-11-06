#include "dog.h"
#include <stdio.h>

/**
 * print_dog - Prints the elements of a struct dog
 * @d: Pointer to the struct dog to print
 *
 * Description: This function prints the elements of a struct dog.
 * If an element is NULL, (nil) is printed instead (e.g., if name is NULL, print "Name: (nil)").
 */
void print_dog(struct dog *d)
{
	    if (d != NULL)
		        {
				        printf("Name: %s\n", (d->name != NULL) ? d->name : "(nil)");
					        printf("Age: %.1f\n", d->age);
						        printf("Owner: %s\n", (d->owner != NULL) ? d->owner : "(nil)");
							    }
}
