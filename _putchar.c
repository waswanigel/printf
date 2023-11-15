#include <main.h>

/**
 * _putchar - writes a character to stdout)
 * @c: the xter
 *
 * Return: 1 on success, -1 on error & errno is set approp.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
