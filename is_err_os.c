#include "holberton.h"

/**
 * is_err_os - checks if an op_string contains a conversion specifier at all
 * @os: the op string
 *
 * Return: 1 for error, 0 for no error
 */
int is_err_os(char *os)
{
	while (isflag(*os))
		os++;
	if (islen_mod(*os))
		os++;
	switch (*os)
	{
	case '\0':
		return (1);
	default:
		return (0);
	}
}
