#include <stdarg.h>
#include "main.h"

/**
 * _printf - printf function
 * @str: string
 * Return: -
 */
int _printf(const char *str, ...)
{
	va_list ap;
	int i;
	int count = 0;

	va_start(ap, str);

	i = 0;

	if (!str)
		return (-1);

	while (str && str[i])
	{
		if (str[i] == '%')
		{
			switch (str[i + 1])
			{
			case 'c':
				count += _putchar(va_arg(ap, int));
				break;
			case 's':
				count += _print_string(va_arg(ap, char*));
				break;
			case '%':
				count += _putchar('%');
				break;
			}
			i += 2;
		}
		else
		{
			count += _putchar(str[i++]);
		}
	}
	va_end(ap);

	return (count);
}

