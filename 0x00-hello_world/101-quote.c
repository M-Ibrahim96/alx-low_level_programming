#include <unistd.h>
/**
 * main - Entry point
 *
 * Description: prints sentnce followed by a new line, to the standard error.
 * without using putchar - puts - printf
 *
 * Return: Alwayes 1
 */

int main(void)
{
	write(1, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
