#include "main.h"

/**
 * _printf - Custom printf implementation
 * @format: Format string
 * Return: Number of characters printed (excluding null byte)
 */

int _printf(const char *format, ...)
{
	int i = 0, count = 0;

	va_list args;

	if (format == NULL || *format == '\0') /*check for null format*/
	{
		return (-1);
	}

	va_start(args, format);

	while (format[i])
	{
		if (format[i] == '%') /*look for % to set up switch cases */
		{
			i++;

			if (format[i] == '\0') /*check for null again*/
			{
				return (-1);
			}

			fswitch(format[i], args, &count);
		}
		else /*if the next character to the % isnt a valid specifier print it */
		{
			_putchar(format[i]);
			count++;
		}
		i++;
	}

	va_end(args);
	return (count);

}

