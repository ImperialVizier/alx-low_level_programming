#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
* main - adds positive numbers
* @argc: argument count parameter
* @argv: argument vector parameter
*
* Return: 0
*/
int main(int argc, char *argv[])
{
	int num, sum, i;

	sum = 0;

	while (argc-- > 1)
	{

		for (i = 0; argv[argc][i]; i++)
		{
			if (!(isdigit(argv[argc][i])))
			{
				printf("Error\n");
				return (1);
			}

		}
		num = atoi(argv[argc]);
		sum += num;
	}
	printf("%d\n", sum);
	return (0);

}
