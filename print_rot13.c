#include "main.h"
/**
 * print_rot13 - convert to rot 13
 * @val: argument
 * Return: counter
 */
int print_rot13(va_list val)
{
	int i, j, count = 0;
	int k = 0;
	char *str = va_arg(val, char *);
	char a[] = {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
	char b[] = {"nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM"};

	if (str == NULL)
		str = "(null)";
	for (i = 0; s[i]; i++)
	{
		k = 0;
		for (j = 0; a[j] && !k; j++)
		{
			if (str[i] == a[j])
			{
				_putchar(b[j]);
				count++;
				k = 1;
			}
		}
		if (!k)
		{
			_putchar(str[i]);
			count++;
		}
	}
	return (count);
}
