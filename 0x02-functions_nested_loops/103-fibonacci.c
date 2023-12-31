#include "main.h"

/**
 * main - Prints the sum of even-valued Fibonacci sequence
 * terms not exceeding 4000000
 * Return: 0 Always
 */
int main(void)
{
	unsigned long fib1 = 0, fib2 = 1, sum, total_sum = 0;

	while (total_sum < 4000000)
	{
		sum = fib1 + fib2;

		if ((sum % 2) == 0)
			total_sum += sum;
		fib1 = fib2;
		fib2 = sum;
	}
	printf("%lu\n", total_sum);
	return (0);
}
