// Comparising against lowercase char

#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // Promt user to agree
    char c = get_char("Do you agree? ");

    // Check whether bagreed
    if ( c== 'y')
    {
        printf("Agreed.\n");
    }
    else if ( c == 'n')
    {
        printf("Not agreed\n");
    }

}