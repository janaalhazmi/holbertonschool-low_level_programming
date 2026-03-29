#ifndef MAIN_H
#define MAIN_H

/**
 * create_array - creates array of chars
 * @size: size of array
 * @c: char to fill
 * Return: pointer or NULL
 */
char *create_array(unsigned int size, char c);

/**
 * _strdup - duplicates string
 * @str: input string
 * Return: pointer or NULL
 */
char *_strdup(char *str);

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: pointer or NULL
 */
char *str_concat(char *s1, char *s2);

/**
 * alloc_grid - creates 2D array
 * @width: width
 * @height: height
 * Return: pointer or NULL
 */
int **alloc_grid(int width, int height);

/**
 * free_grid - frees 2D array
 * @grid: grid
 * @height: height
 */
void free_grid(int **grid, int height);

#endif
