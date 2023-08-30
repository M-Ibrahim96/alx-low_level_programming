#include "main.h"

/**
 * is_prime_number - prime
 * @n: integer params
 * @orthan: integer
 * Return: recursion 0 - 1
 */
int check_prime(int n, int orthn);
int is_prime_number(int n)
{
	return (check_prime(n, 2));
}
/**
 * check_prime - check all numbers less than n
 * @n: int
 * @othrn: int
 * Return: int
 */
int check_prime(int n, int othrn)
{
	if (othrn >= n && n > 1)
		return (1);
	else if (n % othrn == 0 || n <= 1)
		return (0);
	else
		return (check_prime(n, othrn + 1));
}
