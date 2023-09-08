#include "main.h"

/**
 * malloc_checked - allocates memory using malloc and exit if failed
 * @b: int entered
 * Return: point to array or Null.
 */
void *malloc_checked(unsigned int b)
{
	void *m = malloc(b);

	if (m == 0)
		exit(98);

	return (m);
}
