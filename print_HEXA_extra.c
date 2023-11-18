#include "main.h"
/**
 * print_HEXA_extra - converts int to hexadecimal
 * @num: int value
 * Return: counter
 */
int print_HEXA_extra(unsigned int num)
{
	int i, no = 0;
	int *array;
	unsigned int temp = num;

	while (num / 16 != 0)
	{
		num = num / 16;
		no++;
	}
	no++;

	array = malloc(sizeof(int) * no);

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
			array[i] = array[i] + 7;
		_putchar(array[i] + '0');
	}
	free(array);
	return (no);
}
