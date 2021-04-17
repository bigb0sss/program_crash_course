#include <stdio.h>

int square(int input)
{
    return input * input;
}

int cube(int input)
{
    int x = input * input * input;
    return x;
}

int power(int input, int exponent)
{
    int total = 1;
    for(int i = 0; i < exponent; i++)
    {
        total *= input;
    }
    return total;
}

//Recursion --> function calls itself
int recursivePower(int input, int exponent)
{
    if(exponent < 1)
    {
        return 1;
    }
    return input * recursivePower(input, exponent-1);
}

/* Easiest way to square a value 
int main()
{
    int x = 5;
    x *= x;
    printf("%d\n", x);

    return 0;
}
*/

int main()
{
    int x = 5;
    int xSquared = square(x);
    printf("%d\n", xSquared);

    int xPower = power(x, 30);
    printf("%d\n", xPower);
    
    int xRecursive = recursivePower(x, 2);
    printf("%d\n", xRecursive);
    return 0;
}
