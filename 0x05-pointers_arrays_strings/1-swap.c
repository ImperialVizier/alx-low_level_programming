#include "main.h"

/**
* swap_int - swaps integers
* @a: first parameter
* @b: second parameter
*
* Return: void
*/

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
