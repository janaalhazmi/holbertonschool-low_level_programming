#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - returns length
 * @s: string
 *
 * Return: length
 */
int _strlen(char *s)
{
	int i = 0;

	while (s && s[i])
		i++;
	return (i);
}

/**
 * _strcpy - copies string
 * @dest: destination
 * @src: source
 *
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/**
 * new_dog - creates new dog
 * @name: name
 * @age: age
 * @owner: owner
 *
 * Return: pointer or NULL
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	char *n, *o;

	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);

	n = malloc(_strlen(name) + 1);
	if (n == NULL)
	{
		free(d);
		return (NULL);
	}

	o = malloc(_strlen(owner) + 1);
	if (o == NULL)
	{
		free(n);
		free(d);
		return (NULL);
	}

	_strcpy(n, name);
	_strcpy(o, owner);

	d->name = n;
	d->age = age;
	d->owner = o;

	return (d);
}
