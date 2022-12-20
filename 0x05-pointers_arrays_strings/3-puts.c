#include "main.h"

/**
 * _puts - prints the string 
 * @str : the string
 *
 * Return : the length of the string
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\)
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
