#include "function_pointers.h"
/**
 * array_iterator - execute function on each element
 * of an array
 * @array: given array
 * @size: size of the array
 * @action: pointer to function
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int *e = array + size - 1;

	if(array && size && action)
		while (array <= e)
			action(*array++)
}
