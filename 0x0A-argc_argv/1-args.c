#include <stdio.h>

/**
* main - prints number of arguments passed to it
* @argc: argument count parameter
*@argv: argument vector parameter
*
* Return: 0
*/
int main(int argc, char *argv[])
{
	if (argv[0])
		printf("%d\n", argc);
	return (0);
}
