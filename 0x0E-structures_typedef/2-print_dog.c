#include <stdio.h>
#include "dog.h"
/**
 * print_dog - prints the content of struct dog
 * @d: pointer to struct
 *
 * Return: nothing
 */
void print_dog(struct dog *d)
{
	if (d)
	{
		(d->name == NULL) ? printf("Name: (nill)\n") :
			printf("Name: %s\n", d->name);
		(d->age == 0) ? printf("Age: (nill)\n") :
			printf("Age: %f\n", d->age);
		(d->owner == NULL) ? printf("Owner: (nill)\n") :
			printf("Name: %s\n", d->owner);
	}
}
