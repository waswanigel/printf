#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stddef.h>
#include <unistd.h>

/**
 * struct specs - a specifier struct
 * @spec: the conversion specifier
 * @f: function ptr
 */
typedef struct specs
{
	char *specifier;
	int (*f)(va_list args);
} spcfy_dt;

/* Function prototypes */
int _printf(const char *format, ...);
int nk_print_char(va_list args);
int nk_print_str(va_list args);
int _strlen(char *s);
int _strlench(const char *s);
int print_pct(void);
int print_int(va_list args);
int print_decimal(va_list args);
int _putchar(char c);
int nk_print_binary(va_list args);

#endif /* MAIN_H */

