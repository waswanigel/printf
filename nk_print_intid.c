#include "main.h"
/**
 * print_int - prints an integer
 * @args: arguments
 * Return: no. of printed xters
 */

int print_int(va_list args)
{
	int n1 = va_arg(args, int);

	int m1 = n1, end = n1 % 10, num, exp = 1;

	int i = 0;

	if (n1 < 0)
	{
		_putchar('-');
		m1 = -m1;
		end = -end;
		i++;
	}

	while (m1 / exp >= 10)
	{
		exp *= 10;
	}
	
	while (exp > 0)
	{
		num = m1 / exp;
		_putchar(num + '0');
		m1 = m1 % exp;
		exp /= 10;
		i++;
	}

	_putchar(end + '0');

	return (i);
}

/**
 * print_decimal - prints a decimal number
 * @args: arguments
 * Return: no. of printed xters
 */

int print_decimal(va_list args)
{
	int n1 = va_arg(args, int);

	int m1 = n1, end = n1 % 10, num, exp = 1;

	int i = 0;

	if (n1 < 0)
	{
		_putchar('-');
		m1 = -m1;
		end = -end;
		i++;
	}
	while (m1 / exp >= 10)
	{
		exp *= 10;
	}

	while (exp > 0)
	{
		num = m1 / exp;
		_putchar(num + '0');
		m1 = m1 - (num * exp);
		exp = exp / 10;
		i++;
	}

	_putchar(end + '0');

	return (i);
}
