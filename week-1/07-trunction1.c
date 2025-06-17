// Float

#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // Promt user for x
    float x = get_float("x: ");

    // Promt user for y
    float y = get_float("y: ");

    // Divide x by y
    printf("%.50f\n", x / y);
}