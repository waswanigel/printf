#include "main.h"
/**
 * print_octa - converts to octal
 * @val: variable parameter
 * Return: counter
 */
int print_octa(va_list val)
{
	int i, no = 0;
	int *array;
	unsigned int num = va_arg(val, unsigned int);
	unsigned int temp = num;

	while (num / 8 != 0)
	{
		num = num / 8;
		no++;
	}
	no++;

	array = malloc(sizeof(int) * no);

	if (array == NULL)
		return (NULL);
	for (i = 0; i < no; i++)
	{
		array[i] = temp % 8;
		temp = temp / 8;
	}
	for (i = no - 1; i >= 0; i--)
		_putchar(array[i] + '0');
	free(array);
	return (no);
}
