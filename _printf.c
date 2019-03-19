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
					_putchar(va_arg(stringArray, int));
					break;
					
				case 'd':
<<<<<<< HEAD
					nc =_putint(va_arg(stringArray, int));
					break;
				case 'i':
					nc = _putint(va_arg(stringArray, int));
					break;
				case 's':
					s = va_arg(stringArray, char*);
					nc = _puts((s == NULL) ? "" : s);
=======
<<<<<<< HEAD
					_putchar(va_arg(stringArray, int));
					break;
				case 'i':
					_putchar(va_arg(stringArray, int));
=======
					_putint(va_arg(stringArray, int));
					break;
				case 'i':
					_putint(va_arg(stringArray, int));
>>>>>>> 4b91fa70cb7772df4ef0748e62c13929f9969f9e
					break;
				case 's':
					s = va_arg(stringArray, char*);
					if (s == NULL || *s == '\0')
					{
						_puts("nil");
						break;
					}
<<<<<<< HEAD
					_putchar(s);
=======
					_puts(s);
>>>>>>> 4b91fa70cb7772df4ef0748e62c13929f9969f9e
>>>>>>> 5274870483c143e7f82cdacfb46d4e997036034a
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
	return (nc);
}
