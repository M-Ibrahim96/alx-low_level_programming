#include <unistd.h>
#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c the character to print
 *
 * Return: 1 on sucess, on error -1
 * no error is set approximtly
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
