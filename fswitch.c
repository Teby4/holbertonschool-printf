#include "main.h"

/**
 * fswitch - Handle a specifier and update the count.
 * @specifier: Specifier character
 * @args: Variable arguments list
 * @count: Pointer to the count variable
 */

void fswitch(char specifier, va_list args, int *count)
{
	int num;
	char *sstr;

switch (specifier)
{
	case '%':
		_putchar('%');
		(*count)++;
	break;

	case 'c':
		_putchar(va_arg(args, int));
		(*count)++;
	break;

	case 's':
		sstr = va_arg(args, char *);
		_printstr(sstr, "(null)", count);
	break;

	case 'd':
	case 'i':
		num = va_arg(args, int);
		if (num < 0)
		{
			_putchar('-');
			num = -num;
			(*count)++;
		}
		printeg(num, count);
	break;

	default:
		_putchar('%');
		_putchar(specifier);
		(*count) += 2;
}
}
