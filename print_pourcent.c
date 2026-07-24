#include "main.h"

/**
* print_percent - Prints a %
* @args: Argument list containing the character to print
* Return: Number of bytes written
*/

int print_percent(va_list args)
{
	(void)args;
	return (write(1, "%", 1));
}
