#include "main.h"

/**
 * _printf - prints characters to the standard output
 * @format: va variable for arguments
 * Return: total number of characters printed
 */

int _printf(const char *format, ...)
{
	int count = 0;
	va_list args;

	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
		{
			while (*(format + 1) == ' ')
				format++;
			format++;
			if (*format == '\0')
				break;
			if (*format == 'd' || *format == 'i')
			{
				count += print_int(args);
			}
			else if (*format == '%')
			{
				_putchar('%');
				count++;
			}
		}
		else
		{
			_putchar(*format);
			count++;
		}
		format++;
	}
	va_end(args);
	return (count);
}
