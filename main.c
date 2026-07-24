#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
* main - Entry Point
* Return: Always 0
*/

int main(void)
{
	const char charater = 'A';
	const char *str = "Je suis un test";
	const int a = 126;
	const int b = -1221;

	_printf("Character:[%c]\n", charater);
	printf("Character:[%c]\n\n", charater);

	_printf("String:[%s]\n", str);
	printf("String:[%s]\n\n", str);

	_printf("Integer:[%i]\n", a);
	printf("Integer:[%i]\n\n", a);

	_printf("Decimal:[%d]\n", b);
	printf("Decimal:[%d]\n\n", b);

	_printf("Modulo:[%%]\n");
	printf("Modulo:[%%]\n\n");

	_printf("Testing without modulo csid\n");
	printf("Testing without modulo csid\n");

	return (0);
}
