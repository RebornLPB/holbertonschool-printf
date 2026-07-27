#include "main.h"

/**
* _printf - A replica of printf
* @format: Type of the variadic argument
* @...: The variadic argument
* Return: The number of character printed
*/

int _printf(const char *format, ...)
{
	va_list args;
	int i = 0, count = 0;
	int tmp;

	if (!format)
		return (1);

	va_start(args, format);
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			tmp = get_specifier(&format[i + 1])(args);
			if (tmp != -1)
			{
				count += tmp;
				i += 2;
				continue;
			}
			count += write(1, &format[i], 1);
			i++;
		}
		else
		{
			count += write(1, &format[i], 1);
			i++;
		}
	}

	va_end(args);
	return (count);
}
