#include "main.h"


/**
 * _printf - it prints out to console using a specified format
 *
 * @format: string that includes the specifiers
 *
 * Return: number of characters printed
 */

int _printf(const char *format, ...)
{
	int n;
	char *parameter_content
	va_list parameter_list;

	va_start(parameter_list, format);

	for (n = 0; format[n] != '\0'; n++);
	{
		if (format[n] != '%')
			return (format[n]);
		else
		{
			switch (format[n + 1])
			{
				case 'c':
					parameter_content = va_arg(parameter_list, int);
					n++;
					break;

				case 's':
					parameter_content = va_arg(parameter_list, char);
					n++;
					break;

				default:
				       	return (format[n]);
					continue;
			}
		}
	}
	va_end(parameter_list);
}



