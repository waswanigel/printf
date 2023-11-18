#include "main.h"
/**
 * print_hexa_extra - converts to hexadecimal
 * @num: variable parameter
 * Return: counter
 */
int print_hexa_extra(unsigned long int num)
{
	long int i, no = 0;
	long int *array;
	unsigned long int temp = num;

	while (num / 16 != 0)
	{
		num = num / 16;
		no++;
	}
	no++;

	array = malloc(sizeof(long int) * no);

	if (array == NULL)
		return (NULL);
	for (i = 0; i < no; i++)
	{
		array[i] = temp % 16;
		temp = temp / 16;
	}
	for (i = no - 1; i >= 0; i--)
	{
		if (array[i] > 9)
			array[i] = array[i] + 39;
		_putchar(array[i] + '0');
	}
	free(array);
	return (no);
}
