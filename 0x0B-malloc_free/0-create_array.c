#include "main.h"

/**
 * *create_array - creates a new array.
 * intilized with a specific letter.
 * @size: size of the array.
 * @c: char to intilized by it.
 * Return: pointer to the array or NULL.
 */
char *create_array(unsigned int size, char c)
{
	char *n = malloc(size);

	if (size == 0 || n == 0)
		return (0);

	while (size--)
		n[size] = c;

	return (n);
}
