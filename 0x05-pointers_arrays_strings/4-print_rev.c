#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * print_rev - Prints a string in reverse order.
 * @s: Pointer to the string.
 */
void print_rev(char *s)
{
	int l, i;

	l = _strlen(s);
	for (i = l - 1; i >= 0; i--)
	{
	putchar(s[i]);
	}
	putchar('\n');
}

/**
* _strlen - Computes the length of a string.
* @s: Pointer to the string.
*
* Return: The length of the string.
*/
int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
	len++;
	}
	return (len);
}
