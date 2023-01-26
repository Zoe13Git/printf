#include "main.h"
/* #include "_putchar.c" */

/**
 * _print_string - putchar
 * @str: string
 * Return: int
 */
int _print_string(const char *str)
{
	int count = 0;
	int i = 0;

	if (!str)
	{
		 count += _print_string("(null)");
	}
	else
	{
		while (str[i])
			count += _putchar(str[i++]);
	}

	return (count);
}

/**
 * _print_int - Prints int using putchar only
 * @num: int to print
 * Return: 0;
 */
int _print_int(int num)
{
	int count = 0;

	if (num < 0)
	{
		count += _putchar('-');
		num  = -num;
	}

	if (num / 10)
		_print_int(num / 10);

	count += _putchar(num % 10 + '0');

	return (count);
}
