// Division with ints, demostrating trunction 

#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Promt user for x
    int x = get_int("x: ");

    // Promt user for y
    int y = get_int("y: ");

    //Divide x by y
    printf("%i\n", x / y);
}