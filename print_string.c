#include "main.h"

/**
* print_string - Write a string taken from a va_list to stdout
* @args: va_list containing a string to print
* Return: Number of bytes written
*/

int print_string(va_list args)
{
	char *str;
	int len = 0;

	str = va_arg(args, char *);
	if (str == NULL)
		str = "(null)";

	while (str[len])
		len++;

	return (write(1, str, len));
}
