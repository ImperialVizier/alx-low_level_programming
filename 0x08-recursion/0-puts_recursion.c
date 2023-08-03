#include "main.h"

/**
* _puts_recursion - prints string followe by a new line
* @s: string to print
* Return: Nothing
*/
void _puts_recursion(char *s)
{
	if (s == NULL || *s == '\0')
	{
		putchar('\n');
		return;
	}

	putchar(*s);
	_puts_recursion(s + 1);
}
