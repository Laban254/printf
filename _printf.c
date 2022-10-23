#include "main.h"

/**
 * _printf - function to print anything
 *
 * @format: types of argument passed to the function
 *
 *  Return: number of characters printed
 *
 */

int _printf(const char *format, ...)
{
	va_list parameter_list;
	int n;

	va_start(parameter_list, format);
	n = vfprintf(stdout, format, parameter_list);
	va_end(parameter_list);
	return (n);
}
