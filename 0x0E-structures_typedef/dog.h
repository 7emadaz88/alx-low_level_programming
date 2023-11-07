#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - struct that stores some information
 * @name: name
 * @age: age
 * @owner: owner
 *
 * Description: struct dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
