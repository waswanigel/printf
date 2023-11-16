#include "main.h"
/* Function prototypes */
int nk_print_char(va_list args);
int nk_print_str(va_list args);
int print_pct(void);
int print_int(va_list args);
int print_unsigned_int_binary(va_list args);
/**
 * _printf - custom printf function
 * @format: format specifier
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list args;
	int printed_chars = 0;

	if (!format)
		return (-1);

	va_start(args, format);

	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (*format == '\0')
				return (-1);

			switch (*format)
			{
				case 'c':
					printed_chars += nk_print_char(args);
					break;
				case 's':
					printed_chars += nk_print_str(args);
					break;
				case '%':
					printed_chars += print_pct();
					break;
				case 'd':
				case 'i':
					printed_chars += print_int(args);
					break;
				case 'b':
					printed_chars += print_unsigned_int_binary(args);
					break;
				default:
					_putchar('%');
					_putchar(*format);
					printed_chars += 2;
					break;
			}
		}
		else
		{
			_putchar(*format);
			printed_chars++;
		}
		format++;
	}
	va_end(args);

	return (printed_chars);
}
