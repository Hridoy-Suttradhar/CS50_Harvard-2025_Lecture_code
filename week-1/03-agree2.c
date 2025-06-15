// Logical Operator

#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // promt user to agree
    char c = get_char("DO you agree? ");

    // Check whether agree
    if ( c == 'y' || c == 'Y' )
    {
        printf("Agreed.\n");
    }
    else if ( c == 'n' || c == 'N' )
    {
        printf("Not agreed.\n");
    }
}