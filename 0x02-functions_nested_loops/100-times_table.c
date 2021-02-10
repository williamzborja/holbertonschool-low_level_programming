#include "holberton.h"
#include <stdio.h>
/**
 * print_times_table - print times tables without > 5 or < to 0
 * @n: number of times tables to print
 */
void print_times_table(int n)
{
	int i, j;

	if (n > 15 || n < 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n ; j++)
		{
			_putchar('0' + j);
		}
	}
}
