#include "main.h"

/**
 * print_unsigned_int_binary - handles b conv specifier
 * @args: arguments
 * Return: no. of characters
 */
int print_unsigned_int_binary(va_list args)
{
	unsigned int n = va_arg(args, unsigned int);
	int count = 0;

	if (n == 0)
	{
		_putchar('0');
		return (1);
	}

	count = print_unsigned_int_binary_recursion(n);

	return (count);
}

/**
 * print_unsigned_int_binary_recursion - prints binary digits
 * @n: the digit
 * Return: number of digits
 */

int print_unsigned_int_binary_recursion(unsigned int n)
{
	int count = 0;

	if (n > 1)
	{
		count += print_unsigned_int_binary_recursion(n / 2);
	}

	_putchar(n % 2 + '0');
	count++;

	return (count);
}
