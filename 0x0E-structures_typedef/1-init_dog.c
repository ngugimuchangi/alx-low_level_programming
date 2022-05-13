#include "dog.h"
/**
 * init_dog - intializes struct dog to with particular values
 * @d: pointer to struct to initalize
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Return: Nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}
