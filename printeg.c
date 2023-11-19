#include "main.h"

/**
 * printeg - imprime un número entero
 * @num: número a imprimir
 * @count: puntero al contador de caracteres impresos
 *
 * Return: no devuelve nada
 */
void printeg(int num, int *count)
{
	if (num == -2147483648) /*int min*/
	{
		_putchar('2');
		_putchar('1');
		_putchar('4');
		_putchar('7');
		_putchar('4');
		_putchar('8');
		_putchar('3');
		_putchar('6');
		_putchar('4');
		_putchar('8');
		(*count) += 10;
		return;
	}

	if (num < 0)
	{
		_putchar('-');
		num = -num;
		(*count)++;
	}

	if (num / 10 != 0)
	{
		printeg(num / 10, count);
	}

	_putchar((num % 10) + '0');
	(*count)++;
}
