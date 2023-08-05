#include <stdio.h>

/**
* main - prints it's name followed by Aa new line
* @argc: argunemt count parameter
* @argv: argument vector parameter
*
* Return: 0
*/
int main(int argc, char* argv[])
{
	while(argc)
	{
		printf("%s\n", argv[0]);
		break;
	}
	return (0);
}
