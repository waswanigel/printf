#include "main.h"
/**
 * print_int - prints an integer
 * @args: arguments
 * Return: no. of printed xters
 */

int print_int(va_list args)
{
	int n = va_arg(args, int);
	unsigned int m;
	int count = 0;

	if (n < 0)
	{
		_putchar('-');
		m = -n;
		count++;
	}
	else
	{
		m = n;
	}

	if (m >= 10)
	{
		count += print_int_recursion(m / 10);
	}

	_putchar(m % 10 + '0');

	count++;

	return (count);
}

/**
 * print_int_recursion - prints each digit of the number
 * @n: number
 * Return: number of digits
 */

int print_int_recursion(unsigned int n)
{
	int count = 0;

	if (n >= 10)
	{
		count += print_int_recursion(n / 10);
	}

	_putchar(n % 10 + '0');
	count++;

	return (count);
}
