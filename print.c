#include "main.h"
/* #include "_putchar.c" */

/**
 * _print_string - putchar
 * @str: string
 * Return: int
 */
void _print_string(const char *str)
{
	int i = 0;

	while (str[i])
		_putchar(str[i++]);
}

/**
 * _print_int - Prints int using putchar only
 * @num: int to print
 * Return: 0;
 */
void _print_int(int num)
{
	if (num < 0)
	{
		_putchar('-');
		num  = -num;
	}

	if (num / 10)
		_print_int(num / 10);

	_putchar(num % 10 + '0');
}
