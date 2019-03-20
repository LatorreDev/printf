#include "holberton.h"
#include <limits.h>
/**
 * _print_int - prints integers using _putchar
 *
 * @num: integer to print
 *
 * Return: void
 */
void _print_int(int num)
{
long n = 0;
n = n + num;
if (n < 0)
{
	n = n * -1;
	_putchar('-');
}

if (n >= 10)
{
	_print_int((n / 10));
}
_putchar(n % 10 + '0');
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
long nc = 0;
nc = num;
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
