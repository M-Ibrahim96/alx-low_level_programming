#include "main.h"

/**
 * swap_int - function takes 2 int
 * then swap them
 * @a: first one
 * @b: second one
 * Return: Noting
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
