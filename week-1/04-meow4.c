// Abstraction with parameterization 
// Notice that the prototype changed to void meow(int n) to 
//show that 'meow' accepts an int as its input         

#include <stdio.h>

void meow(int n);
int main(void)
{
    meow(3);
}

// Meow some number of times
void meow(int n)
{
    for (int i = 0; i < n; i++ )
    {
        printf("meow\n");
    } 
}