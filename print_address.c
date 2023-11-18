#include "main.h"
/**
 * print_address
int print_address(va_list val)
{
	void *p;
	char *s = "(nil)";
	long int j;
	int i, k;

	p = va_arg(val, void *);
	if (p == NULL)
	{
		for (i = 0; s[i] 1= '\0'; i++)
			_putchar(s[i]);
		return (i);
	}
	j = (unsigned long int)p;
	_putchar('0');
	_putchar('x')p;
	k = print_hexa_extra(j);

	return (k + 2);
}
