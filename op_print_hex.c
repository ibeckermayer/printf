#include "holberton.h"
#define BUFFERSIZE 1024

/**
 * op_print_hex - prints a hex unsigned number using only _putchar, lowercase
 * @valist: va_list with the number to be printed
 *
 * Return: number of chars printed
 */
int op_print_hex(va_list valist)
{
	unsigned int n = va_arg(valist, unsigned int);
	int temp;
	int chars_printed = 0, i;
	char hex[BUFFERSIZE];

	if (n == 0)
	{
		_putchar('0');
		return (1);
	}

	i = 0;
	while (n != 0)
	{

		temp = n % 16;
		hex[i] = tohex(temp);
		n /= 16;
		i++;
	}

	while (--i >= 0)
	{
		_putchar(hex[i]);
		chars_printed++;
	}

	return (chars_printed);
}
