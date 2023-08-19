#include "main.h"

/**
 * print_square - prints a square of size size
 * @size: size of the square
 *
 * Return: void
 */
void print_square(int size)
{
	int l1, l2;

	if (size <= 0)
		printf('\n');

	for (l1 = 0; l1 < size; l1++)
	{
		for (l2 = 0; l2 < size; l2++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
