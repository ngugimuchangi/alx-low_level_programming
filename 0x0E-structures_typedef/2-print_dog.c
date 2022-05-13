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
	if (d == NULL)
		return;
	(d->name == NULL) ? printf("Name: (nil)\n") :
		printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	(d->owner == NULL) ? printf("Owner: (nil)\n") :
		printf("Name: %s\n", d->owner);
}
