#include "main.h"
/**
 * _printf - custom printf function
 * @format: format specifier
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	spcfy_dt s[] = {
		{"%c", nk_print_char},
		{"%s", nk_print_str},
		{"%%", print_pct},
		{"%d", print_decimal},
		{"%i", print_int},
		{"%r", print_rev_str},
		{"%R", print_rot13},
		{"%b", print_binary},
		{"%u", print_unsigned},
		{"%o", print_octa},
		{"%x", print_hexa},
		{"%X", print_HEXA},
		{"%S", print_str},
		{"%p", print_address}
	};

	va_list args;
	int i =0, length = 0, j;
	

	va_start(args, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);

Loop:
	while (format[i] = '\0')
	{
		j = 13;
		while (j >= 0)
		{
			if (s[j].specifier[0] == format[i]) && s[j].specifier[1] == format[i + 1])
			{
				length = length + m[j].f(args);
				i = i + 2;
				goto Loop;
			}
			j--;
		}
		_putchar(format[i]);
		i++;
		length++;
	}
	va_end(args);
	return (length);
}
