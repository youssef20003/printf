#include "main.h"

/**
 * get_specifier - returns a function pointer to the correct specifier
 * @s: the specifier to check
 * Return: a function pointer to the correct specifier
*/
int (*get_specifier(char s))(va_list)
{
	specifier_t specifier[] = {
		{"c", print_char},
		{"s", print_string},
		{"b", print_binary},
		{"d", print_int},
		{"i", print_int},
		{"u", print_unsigned},
		{"o", print_octal},
		{"x", print_hex},
		{"X", print_HEX},
		{NULL, NULL}
	};

	for (int i = 0; specifier[i].type != NULL; i++)
	{
		if (*(specifier[i].type) == s)
			return (specifier[i].f);
	}
	return (NULL);
}
