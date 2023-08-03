#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse,
 * followed by a new line.
 * @s: string to be printed
 * Return: Nothing
 */
void _print_rev_recursion(char *s)
{
	if (s == NULL || *s == '\0')
		return;
	_print_rev_recursion(s + 1);
	putchar(*s);
}
