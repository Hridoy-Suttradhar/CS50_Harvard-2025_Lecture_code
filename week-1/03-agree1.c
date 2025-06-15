// Comparising against lowercase and uppercase char

#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // promt user to agree 
    char c = get_char("Do you agree? ");

    // check whether agree
    if ( c == 'y' )
    {
        printf("Agreed\n");
    }
    else if ( c == 'Y' )
    {
        printf("Agreed\n");
    }
    else if ( c == 'n')
    {
        printf("Not agreed\n");
    }
    else if ( c == 'N')
    {
        printf("Not agreed\n");
    }


}