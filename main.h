#ifndef main_h
#define main_h

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

/**
* struct specifier - Associates a conversion specifier with it's function
* @valid: The specifier character as a string
* Return: Pointer to the deicated print function
*/

typedef struct specifier
{
	char *valid;
	int (*f)(va_list);
} spec_t;

int _printf(const char *format, ...);
int (*get_specifier(const char *s))(va_list);
int print_char(va_list args);
int print_string(va_list args);
int print_percent(va_list args);
int print_integer(va_list args);
int print_decimal(va_list args);

#endif
