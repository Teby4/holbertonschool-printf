#include "main.h"

/**
 * _printstr - Prints a string or a placeholder if the string is NULL.
 * @sstr: The string to be printed or NULL.
 * @null_str: The placeholder string to be printed if sstr is NULL.
 * @count: count
 *
 */

void _printstr(char *sstr, char *null_str, int *count)
{
	int j;

	if (sstr == NULL)
	{
		while (*null_str)
		{
			_putchar(*null_str++);
			(*count)++;
		}
		null_str = "(null)";
	}
	else
	{
		for (j = 0; sstr[j] != '\0'; j++)
		{
			_putchar(sstr[j]);
			(*count)++;
		}
	}
}
