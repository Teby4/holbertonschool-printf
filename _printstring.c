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

	if (sstr == NULL) /*if string is null print "(null)"*/
	{
		while (*null_str)
		{
			_putchar(*null_str++);
			(*count)++;
		}
		null_str = "(null)"; /*reset null string for the next case*/
	}
	else
	{
		for (j = 0; sstr[j] != '\0'; j++) /*print the string and count characters*/
		{
			_putchar(sstr[j]);
			(*count)++;
		}
	}
}
