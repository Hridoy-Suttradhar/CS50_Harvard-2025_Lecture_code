// Return value 

#include <stdio.h>
#include <cs50.h>

int get_positive_int(void);
void meow(int n);

int main(void)
{
    int n = get_positive_int();
    meow(n);
}

//Get number of meows
int get_positive_int(void)
{
    int times;
    do
    {
        times = get_int("Number: ");
    }
    while (times < 1);
    return times;
}

//Meow some number of times 
void meow(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("meow\n");
    }
}