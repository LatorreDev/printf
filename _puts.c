#include "holberton.h"
/**
 * _puts - prints string
 *
 * @str: string to print
 */
int _puts(char *str)
{
int i = 0;
if (*str == '\0')
{
	return (i);
}
while (*str != '\0')
{
	_putchar(*str);
	str++;
	i++;
}
return (i);
}
