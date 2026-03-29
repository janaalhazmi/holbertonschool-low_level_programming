#ifndef MAIN_H
#define MAIN_H

/**
 * malloc_checked - allocates memory
 * @b: size
 * Return: pointer
 */
void *malloc_checked(unsigned int b);

/**
 * string_nconcat - concatenates strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes
 * Return: pointer or NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n);

/**
 * _calloc - allocates memory for array
 * @nmemb: number of elements
 * @size: size of each
 * Return: pointer or NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size);

/**
 * array_range - creates array of ints
 * @min: min value
 * @max: max value
 * Return: pointer or NULL
 */
int *array_range(int min, int max);

#endif
