#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
    int n;

    srand(time(NULL)); /* Seed the random number generator with the current time */

    n = rand() - RAND_MAX / 2; /* Generate a random number between -100 and 100 */

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
