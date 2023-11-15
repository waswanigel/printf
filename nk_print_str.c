#include "main.h"

/**
 * nk_print_str - prints a string to output
 * @args: arguments
 *
 * Return: length of string
 */
int nk_print_str(va_list args)
{
	char *str;
	int length;

	str = va_arg(args, char *);

	if (str)
	{
		length = _strlen(str);

		write(1, str, _strlen(str));
		return (length);
	}
	else
	{
		str = "(null)";

		length = _strlen(str);
		write(1, str, 6);
		return (length);
	}
}
