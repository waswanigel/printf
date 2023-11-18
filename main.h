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
int print_binary(va_list args);
int print_int_recursion(unsigned int n);
int print_unsigned_int_binary(va_list args);
int print_unsigned_int_binary_recursion(unsigned int n);
int print_unsigned(va_list args);
int print_octa(va_list val);
int print_hexa(va_list val);
int print_HEXA(va_list val);
int print_HEXA_extra(unsigned int num);
int print_str(va_list val);
int print_address(va_list val);
int print_hexa_extra(unsigned long int num);
#endif /* MAIN_H */
