#include "main.h"
/**
 * print_int - prints an integer
 * @args: arguments
 * Return: no. of printed xters
 */

int print_int(va_list args)
{
	int n1 = va_arg(args, int);

	int m1, end = n1 % 10, num, exp = 1;

	int i = 1;

	n1 = n1 / 10;

	m1 = n1;

	if (end < 0)
	{
		_putchar('-');
		m1 = -m1;
		n1 = -n1;
		end = -end;
		i++;
	}
	if (m1 > 0)
	{
		while(m1 / 10 != 0)
		{
			exp = exp * 10;
			n1 = n1 / 10;
		}
		m1 = n1;
		while (exp > 0)
		{
			num = m1 / exp;
			_putchar(num + '0');
			m1 = m1 - (num * exp);
			exp = exp / 10;
			i++;
		}
	}
	_putchar(end + '0');

	return (1);
}

/**
 * print_decimal - prints a decimal number
 * @args: arguments
 * Return: no. of printed xters
 */

int print_decimal(va_list args)
{
	int n1 = va_arg(args, int);

	int m1, end = n1 % 10, num, exp = 1;

	int i = 1;

	n1 = n1 / 10;

	m1 = n1;

	if (end < 0)
	{
		_putchar('-');
		m1 = -m1;
		n1 = -n1;
		end = -end;
		i++;
	}
	if (m1 > 0)
	{
		while(m1 / 10 != 0)
		{
			exp = exp * 10;
			n1 = n1 / 10;
		}
		m1 = n1;
		while (exp > 0)
		{
			num = m1 / exp;
			_putchar(num + '0');
			m1 = m1 - (num * exp);
			exp = exp / 10;
			i++;
		}
	}
	_putchar(end + '0');

	return (1);
}
