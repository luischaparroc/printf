#include "holberton.h"
/**
 * prinhupx - prints a short decimal in hexadecimal
 * @arguments: The character to print
 * @buf: buffer pointer
 * @ibuf: index for buffer pointer
 * Return: number of chars printed
 */
int prinhupx(va_list arguments, char *buf, unsigned int ibuf)
{
	short int int_input, i, isnegative, count, first_digit;
	char *hexadecimal, *binary;

	int_input = va_arg(arguments, int);
	isnegative = 0;

	if (int_input == 0)
	{
		ibuf = handl_buf(buf, '0', ibuf);
		return (1);
	}
	if (int_input < 0)
	{
		int_input = (int_input * -1) - 1;
		isnegative = 1;
	}

	binary = malloc(sizeof(char) * (16 + 1));
	binary = fill_binary_array(binary, int_input, isnegative, 16);
	hexadecimal = malloc(sizeof(char) * (4 + 1));
	hexadecimal = fill_hex_array(binary, hexadecimal, 1, 4);

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

	return (count);
}
