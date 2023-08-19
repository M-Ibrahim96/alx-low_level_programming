#include "main.h"

/**
 * print_diagonal - function to print
 * @n is number of lines
 * Return: Always 0
 */
void print_diagonal(int n)
{
	int num, car;

	if (n <= 0)
		_putchar('\n');
	for (num = 0; num < n; num++)
	{
		for (car = 0; car < num; car++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
