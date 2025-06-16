// Addition with int 

#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // Prompt user for first number
    int x = get_int("x: ");
    
    // Prompt user for second number
    int y = get_int("y: ");
    
    // Calculate the sum of x and y
    int sum = x + y;
    
    // Print the result
    printf("%i\n", sum);
}