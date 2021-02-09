#include "holberton.h"
/**
 * print_sign - print [+,-]
 * Return: [0, 1]
 * @n: number to print sign
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	} else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	_putchar('-');
	return (-1);
}
