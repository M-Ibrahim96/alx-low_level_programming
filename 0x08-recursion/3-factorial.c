#include "main.h"

/**
 * factorial - factorial n
 * @n: number to be entred
 * Return: Factorila number to 1
 */
int factorial(int n)
{
	if (n == 0)
		return (1);
	if (n < 0)
		return (-1);
	return (n * factorial(n - 1));
}
