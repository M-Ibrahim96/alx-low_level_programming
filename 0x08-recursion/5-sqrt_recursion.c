#include "main.h"

/**
 * _sqrt_recursion - return the sqrt root
 * @n: integer to be enterd
 * Return: sqrt of number
 */
int square(int n, int val);
int _sqrt_recursion(int n)
{
	return (square(n, 1));
}
/**
 * square - function to get square root
 * @n: intger to search for root
 * @val: Square root
 * Return: Sqrt of number
 */
int square(int n, int val)
{
	if (val * val == n)
	{
		return (val);
	}
	else if (val * val < n)
	{
		return (square(n, val + 1));
	}
	else
		return (-1);
}
