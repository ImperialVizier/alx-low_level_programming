#include "main.h"

/**
* _strdup - duuplicates string
* @str: string to duplicate
*
* Return: string is successful, and NULL otherwise
*/

char *_strdup(char *str)
{
	char *dup;
	int i = 0, len = 0;

	if (str == NULL)
		return (NULL);


	while (*str)
	{
		len++;
		str++;
	}

	dup = (char *)malloc(sizeof(char) * (len + 1));

	if (dup != NULL)
	{
		for (; i < len; i++)
			dup[i] = str[i];

		dup[i] = '\0';

		free(dup);
		return (dup);
	}
	else
		return (NULL);
}
