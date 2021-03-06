#include "holberton.h"


/**
 * op_print_S - prints the string.
 * Non printable characters (0 < ASCII value < 32 or >= 127) are printed
 * this way: \x, followed by the ASCII code value in hexadecimal
 * (upper case - always 2 characters)
 * @valist: va_list with the number to be printed
 *
 * Return: number of chars printed
 */
int op_print_S(va_list valist, char *flag_str, char *len_mods_str)
{
	char *s = va_arg(valist, char *);

	while (*flag_str)
		flag_str++;
	while (*len_mods_str)
                len_mods_str++;

	return (_putSnnl(s));
}
