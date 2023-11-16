#include "main.h"
/* Function prototypes */
int handle_char(va_list args);
int handle_str(va_list args);
int handle_pct(void);
int handle_int(va_list args);
int handle_unsigned_int_binary(va_list args);
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
					printed_chars += handle_char(args);
					break;
				case 's':
					printed_chars += handle_str(args);
					break;
				case '%':
					printed_chars += handle_pct();
					break;
				case 'd':
				case 'i':
					printed_chars += handle_int(args);
					break;
				case 'b':
					printed_chars += handle_unsigned_int_binary(args);
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
