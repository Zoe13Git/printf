#include "main.h"
#include <stdarg.h>
/**
 * _printf - printf function
 * @format: character string
 * Return: number of chars printed
 */
int _printf(const char *format, ...)
{
	int count = 0, i = 0;
	va_list ap;

	va_start(ap, format);
	if (!format)
		return (-1);
	while (format[i])
	{
		if (format[i] == '%')
		{
			switch (format[i + 1])
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
			case 'd':
			case 'i':
				count += _print_int(va_arg(ap, int));
				break;
			default:
				return (-1);
			}
			i += 2;
		}
		else
			count += _putchar(format[i++]);
	}
	va_end(ap);

	return (count);
}
