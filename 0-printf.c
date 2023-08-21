#include "main.h"

/**
  * _printf - Print like a printf
  * @format: Args to the function
  *
  * Return: A format string to output
  */


int _printf(const char *format, ...)
{
	int count = 0;
	va_list args;

	if (format == NULL)
		return (-1);

	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (*format == '\0' || *format == ' ')
				return (-1);

			if (*format == 'c')
			{
				int c = va_arg(args, int);

				count += print_char(c);
			}
			else if (*format == 's')
			{
				char *str = va_arg(args, char *);

				if (*str == NULL)
				{
					print_string("(null");
					return (6);
				}
				else
				{
					count += print_string(str);
				}
			}
			else if (*format == '%')
			{
				count += print_char('%');
			}
		}
		else
		{
			count += print_char(*format);
		}
		format++;
	}
	va_end(args);
	return (count);
}
