#include "main.h"

/**
 * _putchar - print a character to standard output
 * @c: Character to be printed
 * Return: total number of characters printed 
*/

int _putchar(char c)
{
  return write(1, &c, 1);
}
/**
  * print_char - Function to print a character
  * @c: Args
  * @args: function containing arguments
  * Return: 1 for each char called
  */

int print_char(va_list args)
{
  char c = va_arg(args, int);
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
        int count;

        count = strlen(str);

        write(1, str, strlen(str));
        return (count);
}
