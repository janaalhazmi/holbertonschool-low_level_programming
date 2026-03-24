#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: string
 * @needle: substring
 * Return: pointer or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	if (needle[0] == '\0')
		return (haystack);

	for (i = 0; haystack[i] != '\0'; i++)
	{
		j = 0;

		while (needle[j] != '\0' && haystack[i + j] == needle[j])
			j++;

		if (needle[j] == '\0')
			return (&haystack[i]);
	}

	return (0);
}
