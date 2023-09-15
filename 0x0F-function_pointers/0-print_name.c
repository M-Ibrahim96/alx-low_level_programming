#include "function_pointers.h"

/**
 * print_name - prints a name
 *@name: the string to be printed
 *@f: the printing function
 *Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
		f(name);
}
