#include "holberton.h"
#include <limits.h>
/**
 * _print_int - prints integers using _putchar
 *
 * @num: integer to print
 *
 * Return: void
 */
void _print_int(double num)
{
double n = 0;
int test = INT_MIN;
n = n + num;
if (n < 0 && num != test)
{
	n -= n * 2;
	_putchar('-');
}

if (n >= 10 && num != test)
{
	_print_int((n / 10));
}
if (num == test)
{
	_puts("-2147483648");
}
if (num != test)
	_putchar((int)n % 10 + '0');

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
double nc = 0;
nc = num;
_print_int(nc);

if (nc < 0)
{
	nc -= nc * 2;
	len++;
}
while (nc > 10)
{
	nc = nc / 10;
	len++;
}

return (len);
}
