#include "main.h"

/**
 * cap_string - capitalizes words
 * @str: string
 * Return: str
 */
char *cap_string(char *str)
{
	int i = 0;
	int capitalize = 1;

	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z' && capitalize)
		{
			str[i] = str[i] - 32;
			capitalize = 0;
		}

		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
		    str[i] == ',' || str[i] == ';' || str[i] == '.' ||
		    str[i] == '!' || str[i] == '?' || str[i] == '"' ||
		    str[i] == '(' || str[i] == ')' ||
		    str[i] == '{' || str[i] == '}')
			capitalize = 1;
		else if (str[i] != ' ')
			capitalize = 0;

		i++;
	}

	return (str);
}
