#include "main.h"

/**
 * _strlen - returns lenth of a string
 * @s: the string
 *
 * Return: length of string
 */
int _strlen(char *s)
{
	int i = 0;

	int count = 0;

	while (s[i] != '\0')
	{
		count++;
		i++;
	}
	return (count);
}

/**
 * _strlench - returns lenth of a const char ptr string
 * @s: the char ptr
 *
 * Return: length of string
 */
int _strlench(const char *s)
{
	int i = 0;

	int count = 0;

	while (s[i] != '\0')
	{
		count++;
		i++;
	}
	return (count);
}
