#include "main.h"

/**
* get_specifier - Return the function that handles a format specifier
* @s: Pointer to the specifier string to match
* Return: Pointer to a function that accepts a va_list and returns int,
* or NULL if no matching specifier is found
*/

int (*get_specifier(const char *s))(va_list)
{
	spec_t spec[] = {
		{"c", print_char},
		{"s", print_string},
		{"i", print_integer},
		{"d", print_decimal},
		{"%", print_percent},
		{NULL, NULL}
	};

	int i = 0;

	while (spec[i].valid != NULL && *(spec[i].valid) != *s)
		i++;

	return (spec[i].f);
}
