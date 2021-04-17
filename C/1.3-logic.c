#include <stdio.h>
#include <stdbool.h>

int main()
{
    int age = 17;
    double money = 30000;
    if(!(age > 17))  //1 = true, 0 = false
    {
        printf("This is adult\n");
    } 
    
    else
    {
        printf("This is no adult\n");
    } 

    if(age > 17 || money > 25000)  // && = AND, || = OR
    {
        printf("This is ture\n");
    }

    

    return 0;
}