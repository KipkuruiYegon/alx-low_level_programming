#include "dog.h"
#include <stdio.h>
/**
 * print_dog - prints the dog variables
 * @d: struct of the dog
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name == NULL)
			printf("Name of dog: (nil)\n");
		else
			printf("Name of dog: %s\n", d->name);

		printf("Age: %f\n", d->age);
		if (d->owner == NULL)
			printf("Owner of dog: (nil)\n");
		else
			printf("Owner of dog: %s\n", d->owner);
	}
}
