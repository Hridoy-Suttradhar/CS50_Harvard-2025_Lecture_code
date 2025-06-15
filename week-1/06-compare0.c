//Contional, Boolean expression, relational operator

#include <stdio.h>
#include <cs50.h>

int main(void)
{
    //promt user for integers
    int x = get_int("what's x? ");
    int y = get_int("what's y ");

    //compare integer
    if (x < y)
    {
        printf("x is less than y\n");
    } else if (x > y)
    {
        printf("x is greater than y\n");
    } else
    {
        printf("x is equal to y\n");
    }
}