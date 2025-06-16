// User input

#include <cs50.h>
#include <stdio.h>

void meow(int n);

int main(void)
{
    int times;
    do
    {
        times = get_int("Number: ");
    }
    while (times < 1);
    meow(times);
}

//Meow some number of times 
void meow(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("meow\n");
    }
}