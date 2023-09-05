#include <stdio.h>
#include <stdlib.h>

/**
 * main-prints multiplication of results
 * @argc: numbers of command lines
 * @argv: array of command lines.
 * Return: 0.
 */
int main(int argc, char *argv[])
{
	int multi;

	if (argc == 3)
	{
		multi = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", multi);

		return (0);
	}
	else
	{
		printf("Error\n");

		return (1);
	}
}
