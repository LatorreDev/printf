#include "holberton.h"
/**
 * _putint - prints integers using _putchar
 *
 * @num: integer to print
 *
 * Return: void
 */
 void _putint(int num)
{
if (num < 0)
{
	num = num * -1;
	_putchar('-');
}

if (num > 10)
	_putint(num / 10);

_putchar(num % 10 + '0');
}
