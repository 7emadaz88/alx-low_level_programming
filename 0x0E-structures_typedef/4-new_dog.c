#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * new_dog - creates a new dog.
 * @name: name of the dog.
 * @age: age of the dog.
 * @owner: owner of the dog.
 * Return: struct dog.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int i, l1 = 0, l2 = 0;
	dog_t *N_dog;

	N_dog = malloc(sizeof(*N_dog));
	if (N_dog == NULL || N_dog->name == NULL || N_dog->owner == NULL)
	{
		free(N_dog);
		return (NULL);
	}
	while (name[l1] != '\0')
		l1++;

	while (owner[l2] != '\0')
		l2++;

	N_dog->name = malloc(l1 + 1);
	N_dog->owner = malloc(l2 + 1);

	if (N_dog->name == NULL || N_dog->owner == NULL)
	{
		free(N_dog->owner);
		free(N_dog->name);
		free(N_dog);
		return (NULL);
	}

	for (i = 0; i < l1; i++)
	{
		N_dog->name[i] = name[i];
	}

	N_dog->age = age;

	for (i = 0; i < l1; i++)
	{
		N_dog->owner[i] = owner[i];
	}

	return (N_dog);
}
