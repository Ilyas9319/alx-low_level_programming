#include "stdio.h"
/**
* print_alphabet - Prints the alphabet in lowercase followed by a new line
* Description: This function prints the lowercase alphabet from 'a' to 'z'
*              followed by a newline character.
*/
void print_alphabet_x10(void)
        {
        char letter;
	int i

	for (i = 0; i < 9; i++)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
	{
	putchar(letter);
	}
	}
	putchar('\n');
	}
