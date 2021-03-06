#include "holberton.h"

/**
 * extract_op_str - extracts the op_str from the fullfunc_str
 * @fullfunc_str: the string with both flags and op
 *
 * Return: string with the op_str
 */
char *extract_op_str(char *fullfunc_str)
{
	char *op_str = malloc(2);
	if (op_str == NULL)
		return (NULL);

	op_str[0] = ' ';
	op_str[1] = '\0';

	while (isflag(*fullfunc_str))
		fullfunc_str++;

	if (islen_mod(*fullfunc_str))
		fullfunc_str++;

	op_str[0] = *fullfunc_str;

	return (op_str);
}
