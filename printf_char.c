#include "main.h"

/**
 * printf_char - a function that prints a char.
 * @val: list.
 * Return: always 1.
 */
int printf_char(va_list val)
{
	char s;

	s = va_arg(val, int);
	_putchar(s);
	return (1);
}
