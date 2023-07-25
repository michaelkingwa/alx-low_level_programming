#include "main.h"
#include <stdio.h>

/**
 * print_rev - prints a string in reverse
 * @s: string
 * return: 0
 */
void print_rev(char *s)

{
	int m = 0;

	while (s[m] != '\0')
	{
		m++;
	}

	for (m -= 1; m >= 0; m--)
	{
		_putchar(s[m]);
	}
	_putchar('\n');
}
