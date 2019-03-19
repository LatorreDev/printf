#include "holberton.h"
#include <stdio.h>
#include <stdarg.h>
/*
* _printf - entry point
*/

int _printf(const char *format, ...)
{
	va_list stringArray;
	unsigned int counter = 0;
	char* s;

	va_start(stringArray, format);
	while (format != 0 && format[counter] != '\0')
	{
		if (format[counter] == '%')
		{
			counter++;
			
			switch (format[counter])
			{
				case 'c':
					_putchar(va_arg(stringArray, int));
					break;
					
				case 'd':
					_putint(va_arg(stringArray, int));
					break;
				case 'i':
					_putint(va_arg(stringArray, int));
					break;
				case 's':
					s = va_arg(stringArray, char*);
					if (s == NULL || *s == '\0')
					{
						_puts("nil");
						break;
					}
					_puts(s);
					break;
				default:
					break;
			}
			counter++;
		}
		_putchar(format[counter]);
		counter++;
	}
	va_end(stringArray);
	return (counter);
}
