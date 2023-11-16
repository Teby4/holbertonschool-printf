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

	if (format == NULL || *format == '\0')
	{
		return (-1);
	}

	va_start(args, format);

	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;

			if (format[i] == '\0')
			{
				return (-1);
			}

			fswitch(format[i], args, &count);
		}
		else
		{
			_putchar(format[i]);
			count++;
		}
		i++;
	}

	va_end(args);
	return (count);

}
