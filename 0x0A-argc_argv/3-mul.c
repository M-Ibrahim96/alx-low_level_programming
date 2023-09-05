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
		multi = argv[1] * argv[2];
		printf("%d\n", multi);
	}
	else
	{
		printf("Errod\n");

		return (1);
	}
}
