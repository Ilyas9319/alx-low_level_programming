#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point of the program
 *
 * Description: Assigns a random number to the variable n and prints whether
 *              the number is positive or negative.
 *
 * Return: 0 on success
 */
int main(void)
{
    int n;

    srand(time(NULL)); /* Seed the random number generator with the current time */

    n = rand() % 201 - 100; /* Generate a random number between -100 and 100 */

    if (n < 0)
    {
        printf("%d is negative.\n", n);
    }
    else if (n > 0)
    {
        printf("%d is positive.\n", n);
    }
    else
    {
        printf("%d is zero.\n", n);
    }

    return 0;
}
