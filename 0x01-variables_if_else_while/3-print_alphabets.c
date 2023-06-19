#include <stdio.h>

/**
 * main - Prints the alphabet.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alp[26] = "abcdefghijklmnopqrstuvwxyz";
	char ALP[27] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ$";
	int i;

	for (i = 0; i < 26; i++)
	{
	putchar(alp[i]);
	}
	for (i = 0; i < 27; i++)
	{
	putchar(ALP[i]);
	}
	putchar('\n');
	return (0);
}
