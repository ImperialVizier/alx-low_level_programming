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
	unsigned int i;

	if (str == NULL)
		return (NULL);

	dup = (char *) malloc(sizeof(str));

	if (dup == NULL)
		return (NULL);

	i = 0;
	while (i < sizeof(str))
	{
		dup[i] = str[i];
		i++;
	}
	free(dup);
	return (dup);
}
