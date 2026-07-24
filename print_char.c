#include "main.h"

/**
* print_char - Prints a character from a va_list
* @args: Argument list containing the character to print
* Return: Number of bytes written
*/

int print_char(va_list args)
{
	char c;

	c = va_arg(args, int);
	return (write(1, &c, 1));
}
