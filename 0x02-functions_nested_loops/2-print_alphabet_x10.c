#include "stdio.h"
/**
 * print_alphabet_x10 - Prints the alphabet in lowercase 10 times
 * Description: This function prints the lowercase alphabet from 'a' to 'z'
 *              followed by a newline character, repeated 10 times.
 */
void print_alphabet_x10(void)
	{
	char letter;
	int i;

	for (i = 0; i < 10; i++)
	{
	for (letter = 'a'; letter <= 'z'; letter++)
	{
	putchar(letter);
	}
		putchar('\n');
	}
	}
