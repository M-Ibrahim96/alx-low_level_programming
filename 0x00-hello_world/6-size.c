#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print size of datatypes
 *
 * Return: Alwayes 0
 */
int main(void)
{
	int a;
	char b;
	float c;
	long int d;
	long long e;

	printf("Size of b as char: %lu byte(s)\n", (unsigned long)sizeof(b));
	printf("Size of a as int: %lu byte(s)\n", (unsigned long)sizeof(a));
	printf("Size of d as long int: %lu byte(s)\n", (unsigned long)sizeof(d));
	printf("Size of e as long long int: %lu byte(s)\n", (unsigned long)sizeof(e));
	printf("Size of c as float: %lu byte(s)\n", (unsigned long)sizeof(c));
	return (0);
}
