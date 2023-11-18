#include "main.h"
/**
 * print_str - prints strings
 * @val: value
 * Return: no of characters
 */
int print_str(val_list val)
{
	char *str;
	int i, count = 0, data;

	str = va_arg(val, char *);

	if (str == NULL)
		str = "(null)";
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] < 32 || str[i] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			count = count + 2;
			data = str[i];

			if (data < 16)
			{
				_putchar('0');
				count++;
			}
			count = count + print_HEXA_extra(data);
		}
		else
		{
			_putchar(str[i]);
			count++;
		}
	}
	return (count);
}
