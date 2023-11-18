#include "main.h"
/**
 * print_rev_str - prints the reversed string
 * @val: argument
 * Return: reversed string
 */
int print_rev_str(va_list val)
{
	char *str = va_arg(val, char *);
	int i, j = 0;

	if (str == NULL)
		str = "(null)";
	while (s[j] != '\0')
		j++;
	for (i = j - 1; i >= 0; i--)
		_putchar(s[i]);
	return (j);
}
