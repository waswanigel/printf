#include "main.h"

/**
 * nk_print_char - handles conversion specifier c to print a char
 * @args: arguments
 * Return: always 1
 */
int nk_print_char(va_list args)
{
	char c;

	c = va_arg(args, int);
	write(1, &c, 1);
	return (1);
}
