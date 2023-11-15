#include "main.h"

/**
 * _printf - prints a formatted string to the standard output
 * @format: the format string
 * @args: the arguments
 *
 * Return: the number of characters printed
 */

int _printf(const char *format, ...)
{
	va_list args;

	int count = 0;

	va_start(args, format);

	while (*format != '\0')
	{
		if (*format == '%')
		{
			switch (*++format)
			{
			case 'c':
				count += nk_print_char(args);
				break;
			case 's':
				count += nk_print_str(args);
				break;
			case '%':
				count += print_pct();
				break;
			case 'd':
				count += print_decimal(args);
				break;
			case 'i':
				count += print_int(args);
				break;
			default:
				break;
			}
		}
		else
		{
			write(1, format, 1);
			count++;
		}
		format++;
	}

	va_end(args);

	return (count);
}
