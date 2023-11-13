#include "main.h"

/**
 * _print_string - prints a string
 * @str: string
 * Return: int
 */
int _print_string(char *str)
{
	int i = 0;

	while (str[i])
		_putchar(str[i++]);

	return (i);
}

/**
 * _print_int - prints int using putchar only
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
