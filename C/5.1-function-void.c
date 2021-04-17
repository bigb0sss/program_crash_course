#include <stdio.h>

void changeVal(int *input)  //VOID function is not required to print the value
{
    *input = 9000;
}

//Using a pointer * to anchor the variable

int main ()
{
    int x = 5;
    changeVal(&x);  //Using & to sync it to the pointer specified
    printf("%d\n", x);
    return 0;
}