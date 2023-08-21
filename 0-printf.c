#include "main.h"

/**
  * print_char - Function to print a character
  * @c: Args
  *
  * Return: 1 for each char called
  */

int print_char(char c)
{
	_putchar(c);
	return (1);
}

/**
  * print_string - stdout the string passed to it
  * @str: Pointer to the string
  *
  * Return: Number of char
  */

int print_string(char *str)
{
	int count = 0;

	while (*str)
	{
		_putchar(*str);
		str++;
		count++;
	}

	return (count);
}

/**
  * _printf - Print like a printf
  * @format: Args to the function
  *
  * Return: A format string to output
  */


int _printf(const char format, ...)
{
	int count = 0;
	va_list args;

	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (*format == '\0')
			{
				break;
			}

			if (*format == 'c')
			{
				char c = va_arg(args, int);

				count += print_char(c);
			}
			else if (*format == 's')
			{
				char *str;

				str = va_arg(args, char *);
				count += print_string(str);
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
