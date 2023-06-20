#include "stdio.h"
/**
* print_alphabet - Prints the alphabet in lowercase followed by a new line
* Description: This function prints the lowercase alphabet from 'a' to 'z'
*              followed by a newline character.
*/
void print_alphabet(void)
	{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
	putchar(letter);
	}
	putchar('\n');
	}
