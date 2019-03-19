#include "holberton.h"
/**
 * _print_int - prints integers using _putchar
 *
 * @num: integer to print
 *
 * Return: void
 */
 void _print_int(int num)
{
if (num < 0)
{
	num = num * -1;
	_putchar('-');
}

if (num >= 10)
{	
	_print_int((num / 10));
}
_putchar(num % 10 + '0');
}

/**
 * _putint - prints integers using _putchar
 *
 * @num: integer to print
 *
 * Return: void
 */
 int _putint(int num)
{
int len = 1;
int nc = num;
_print_int(num);

if (nc < 0)
{
	nc = nc * -1;
	len++;
}
while (nc > 10)
{	
	nc = nc / 10;
	len++;
}
return (len);
}
