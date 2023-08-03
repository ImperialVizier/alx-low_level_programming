#include "main.h"
#include <stdio.h>

int _strlen_recursion(char *s);
int palindrome_helper(char *s, int len);

/**
* _strlen_recursion - function to obtain the length of the string s
* @s: string whose length to calculate
* Return: length of string s
*/
int _strlen_recursion(char *s)
{
	if (s == NULL || *s == '\0')
		return (0);
	return (_strlen_recursion(s + 1) + 1);
}

/**
* is_palindrome - checks if s is a palindrome
* @s: input string
* Return: 1 if is string is a palindrome otherwise 0
*/
int is_palindrome(char *s)
{
	int len;

	len = _strlen_recursion(s);
	if (len <= 1)
		return (1);
	return (palindrome_helper(s, len));

}

/**
 * palindrome_helper - reverses string and checks if it matches with original
 * @s: input string
 * @len: length of string s
 * Return: reverse string
 */
int palindrome_helper(char *s, int len)
{
	if (len <= 1)
		return (1);
	if (*s == *(s + len - 1))
		return (palindrome_helper(s + 1, len - 2));
	return (0);

}
