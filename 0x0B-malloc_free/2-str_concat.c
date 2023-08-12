#include "main.h"

/**
* str_concat - concatenates two strings
* @s1: first string
* @s2: second string
*
* Return: Concatenated string is successful. or NULL otherwise
*/

char *str_concat(char *s1, char *s2)
{
	char *concat;
	size_t len1, len2, totalLen, i;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	len1 = 0;
	len2 = 0;

	while (s1[len1] != '\0')
		len1++;

	while (s2[len2] != '\0')
		len2++;

	totalLen = len1 + len2;

	concat = (char *)malloc((totalLen + 1) * sizeof(char));
	if (concat == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		concat[i] = s1[i];

	for (i = 0; i < len2; i++)
		concat[len1 + i] = s2[i];

	concat[totalLen] = '\0';

	if (concat == NULL)
		return ("");

	return (concat);


}
