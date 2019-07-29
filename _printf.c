#include "holberton.h"

/**
 * _printf - formatted output conversion and print data.
 * @format: input string.
 *
 * Return: number of chars printed.
 */
int _printf(const char *format, ...)
{
	unsigned int i = 0, len = 0, ibuf = 0;
	va_list arguments;
	int (*function)(va_list, char *, unsigned int);
	char *buffer;

	if (format == NULL || format[i] == '\0')
		return (-1);

	va_start(arguments, format);
	buffer = malloc(sizeof(char) * 1024);
	while (format[i])
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '%')
				handl_buf(buffer, format[i], ibuf), len++;
			else
			{
				function = get_print_func(format[i + 1]);
				if (function == NULL)
				{
					if (ibuf != 0)
						print_buf(buffer, ibuf);
					free(buffer);
					va_end(arguments);
					if (len == 0)
						len = -1;
					return (len);
				}
				len += function(arguments, buffer, ibuf);
			} i++;
		}
		else
			handl_buf(buffer, format[i], ibuf), len++;
		i++, ibuf = len;
		while (ibuf > 1024)
			ibuf -= 1024;
	}
	print_buf(buffer, ibuf), free(buffer), va_end(arguments);
	return (len);
}
