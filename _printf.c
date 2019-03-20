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
	int nc = 0, c = 0;

	va_start(stringArray, format);
	while (format != 0 && format[counter] != '\0')
	{
		if (format[counter] == '%' && format[counter + 1] != '\0')
		{
			counter++;
			switch (format[counter])
			{
				case 'c':
					nc += ((c = va_arg(stringArray, int)) == '\0') ? 1 : _putchar(c);
					break;
				case 'd':
					nc += _putint(va_arg(stringArray, int));
					break;
				case 'i':
					nc += _putint(va_arg(stringArray, int));
					break;
				case 's':
					nc += ((s = va_arg(stringArray, char*)) == NULL) ? "(null)" : _puts(s);
					break;
				default:
					nc += _putchar('%');
					nc += (format[counter] == '%') ? 0 : _putchar(format[counter]);
					break;
			}
		}
		else
			nc += (format[counter] == '%') ? -1 : _putchar(format[counter]);
		if (format[counter] == 0)
			_putchar(0);
		counter++;
	}
	va_end(stringArray);
	return ((nc == 0) ? -1 : nc);
}
