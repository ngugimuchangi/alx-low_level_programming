#ifndef DOG_H
#define DOG_H

/**
 * struct dog - consolidates attributes of dog
 * @name: dog name
 * @owner: dog owner
 * @age: dog age
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

#endif

