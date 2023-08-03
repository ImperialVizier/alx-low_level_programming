#include "main.h"
/**
* wildcmp - compares two strings
* @s1: First input string
* @s2: Second input string
* Return: 1 if strings identical otherwise 0
*/
int wildcmp(char *s1, char *s2)
{
	if ((s1 == NULL || *s1 == '\0') && (s2 == NULL || *s2 == '\0'))
		return (1);
	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));
	if (*s1 == '\0' && *s2 == '*')
		return (wildcmp(s1, s2 + 1));
	if (*s2 == '*')
		return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));
	return (0);
}
