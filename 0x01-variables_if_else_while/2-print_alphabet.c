#include <stdio.h>
/* I sometimes suffer from insomnia. And when I can't fall asleep I play what I call the alphabet game */
int main(void) 
{
	/*Correction of  I sometimes suffer from insomnia. And when I can't fall asleep, I play what I call the alphabet game*/
	char caracter;
	int i;

for (i = 97 ; i < 123 ; i++)
{
	caracter = i;
	putchar ( caracter ) ; 
}
	putchar('\n');
	return (0);
}
