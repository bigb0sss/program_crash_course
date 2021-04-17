#include <stdio.h>

int main()
{
    //Slow way to create a static array
    /* int ages[10]; 
    ages[3] = 55;
    ages[4] = 65; */

    //Better way to create a static array
    int size = 7;
    int ages[] = {1, 20, 25, 30, 35, 55, 65};

    //printArray(ages, size); - If we want to create a function...

    for (int i = 0; i < size; i++)
    {
        printf("%d ", ages[i]);
    }

    printf("\n");
    ages[3] = 40;
    for (int i = 0; i < size; i++)
    {
        printf("%d ", ages[i]);
    }

    //first element - index 0
    //0-9 
    return 0;

}