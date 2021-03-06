/*
 * File: /-init_dog.c
 * Author: kelemu L.
 */

#include "dog.h"
#include <stdlib.h>

/**
 * init_dog -  of struct .
 * @d: The struct to be initialized.
 * @name: Dog name.
 * @age: Dog Age.
 * @owner: Dog owner.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
