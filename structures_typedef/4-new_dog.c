#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
* new_dog - creates a new dog
* @d: pointer to the dog structure
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	size_t len_name, len_owner, i;

	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);

	for (len_name = 0; name[len_name] != '\0'; len_name++)
		;
	d->name = malloc ((len_name + 1) * sizeof(char));
	if (d->name == NULL)
		return (NULL);
	for (i = 0; i <= len_name; i++)
		d->name[i] = name[i];

	d->age = age;

	for (len_owner = 0; owner[len_owner] != '\0'; len_owner++)
		;
	d->owner = malloc ((len_owner + 1) * sizeof(char));
	if (d->owner == NULL)
		return (NULL);
	for (i = 0; i <= len_owner; i++)
		d->owner[i] = owner[i];

	return (d);

}
