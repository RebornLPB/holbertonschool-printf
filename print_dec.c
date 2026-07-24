#include "main.h"

/**
* print_decimal - Prints a decimal from a va_list
* @args: Argument list containing the integer to print
* Return: Number of bytes written
*/

int print_decimal(va_list args)
{
	int i = 0, len = 0;
	char str[12];
	int j;

	int integer = va_arg(args, int);

	if (integer == 0)
	{
		return (write(1, "0", 1));
	}

	if (integer < 0)
	{
		write(1, "-", 1);
		len++;
		j = -integer;
	}
	else
	{
		j = integer;
	}

	while (j > 0)
	{
		str[i++] = (j % 10) + '0';
		j /= 10;
	}

	while (i > 0)
	{
		i--;
		write(1, &str[i], 1);
		len++;
	}

	return (len);
}
