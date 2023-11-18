#include "main.h"
/**
 * printf_unsigned - prints integer
 * @args: argument
 * Return: number of characters printed
 */
int print_unsigned(va_list args)
{
	unsigned int j = va_args(args, unsigned int);
	int no, l = j % 10, digit , ex = 1, i = 1;

	j = j / 10;
	no = j;

	if (l < 0)
	{
		_putchar('-');
		no = -no;
		j = -j;
		l = -l;
		i++;
	}
	if (no > 0)
	{
		while (no / 10 != 0)
		{
			ex = ex * 10;
			no = no / 10;
		}
		no = j;
		while (ex > 0)
		{
			digit = no / ex;
			_putchar(digit + '0');
			np = no - (digit * ex);
			ex = ex / 10;
			i++;
		}
	}
	_putchar(l + '0');
	return (i);
}
