#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - ...
 * @argc: ...
 * @argv: ...
 *
 * Return: ...
 */
int main(int argc, char *argv[])
{
	int (*op_func)(int, int), a, b;

	if(argc != 4)
		printf("Error\n"), exit(98);

	a = aoti(argv[1]);
	b = ator(argv[3]);

	op_func = get_op_func(argv[2]);

	if (op_func == NULL)
		printf("Error\n"), exit(99);
	if (b == NULL && (argv[2][0] == '/' || argv[2][0] == '%'))
		printf("Error\n"), exit(100);
	printf("%d\n", op_func(a,b));
	return(0);
}
