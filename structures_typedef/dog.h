#ifndef DOG_H
#define DOG_H

/**
 * struct dog - dog structure
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

/**
 * init_dog - initialize dog
 * @d: pointer to struct
 * @name: name
 * @age: age
 * @owner: owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner);

/**
 * print_dog - prints dog
 * @d: pointer to struct
 */
void print_dog(struct dog *d);

/**
 * new_dog - creates new dog
 * @name: name
 * @age: age
 * @owner: owner
 *
 * Return: pointer or NULL
 */
dog_t *new_dog(char *name, float age, char *owner);

/**
 * free_dog - frees dog
 * @d: pointer to dog
 */
void free_dog(dog_t *d);

#endif
