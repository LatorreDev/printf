
#include "holberton.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * _printf - entry point
 * @format: entry array
 * Return: print the passed info
 */
int _printf(const char *format, ...)
{
	va_list stringArray;
	unsigned int counter = 0;
	char *s;
	int nc = 0;

	va_start(stringArray, format);
	while (format != 0 && format[counter] != '\0')
	{
		if (format[counter] == '%')
		{
			counter++;
			switch (format[counter])
			{
				case 'c':
					nc +=_putchar(va_arg(stringArray, int));
					break;
				case 'd':
					nc += _putint(va_arg(stringArray, int));
					break;
				case 'i':
					nc += _putint(va_arg(stringArray, int));
					break;
				case 's':
					s = va_arg(stringArray, char*);
					nc += _puts((s == NULL) ? "" : s);
					break;
				default:
					break;
			}

			counter++;
		}
		_putchar(format[counter]);
		counter++;
		++nc;
	}
	va_end(stringArray);
	return (nc);
}

