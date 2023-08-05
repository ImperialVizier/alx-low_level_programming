#include <stdio.h>

/**
* main - prints the arguments it receives
* @argc: argument count parameter
* @argv: argument vector parameter
*
* Return: 0
*/
int main(int argc, char *argv[])
{
	while(argc--)
		printf("%s\n", *argv++);
	return (0);
}
