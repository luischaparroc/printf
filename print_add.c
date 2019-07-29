#include "holberton.h"
/**
 * print_add - prints the address of an input variable
 * @arguments: input address.
 * @buf: buffer pointer.
 * @ibuf: index for buffer pointer
 *
 * Return: number of chars printed.
 */
int print_add(va_list arguments, char *buf, unsigned int ibuf)
{
	void *add;
	long int int_input;
	int i, count, first_digit;
	char *hexadecimal, *binary;
	char nill[] = "(nil)";

	add = (va_arg(arguments, void *));
	if (add == NULL)
	{
		for (i = 0; nill[i]; i++)
			ibuf = handl_buf(buf, nill[i], ibuf);
		return (5);
	}
	int_input = (intptr_t)add;
	binary = malloc(sizeof(char) * (48 + 1));
	binary = fill_binary_array(binary, int_input, 0, 48);
	hexadecimal = malloc(sizeof(char) * (12 + 1));
	hexadecimal = fill_hex_array(binary, hexadecimal, 0, 12);
	ibuf = handl_buf(buf, '0', ibuf);
	ibuf = handl_buf(buf, 'x', ibuf);
	for (first_digit = i = count = 0; hexadecimal[i]; i++)
	{
		if (hexadecimal[i] != '0' && first_digit == 0)
			first_digit = 1;
		if (first_digit)
		{
			ibuf = handl_buf(buf, hexadecimal[i], ibuf);
			count++;
		}
	}
	free(binary);
	free(hexadecimal);
	return (count + 2);
}
