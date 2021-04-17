#include <stdio.h>

int main()
{
    //initialization
    //comparison
    //update
    for(int i = 0; i < 10; i++)
    {
        printf("%d ", i);
    }

    //decrement
    int i;
    for(i = 9; i >= 0; i--)
    {
        printf("%d ", i);
    }

    printf("\n");

    int size = 10;
    int ages[] = {12, 43, 545, 3, 4, 54, 6, 7, 87, 12};
    //int calculateSize = sizeof(ages) / sizeof(ages[0]);
    for (int i = 0; i < size; i++)
    {
        printf("ages[i] = %d\n", ages[i]);
    }

    //Nested forloop
    for (int i = 0; i < 10; i++)
    {
        for (int j = i; j >= 0; j--)
        {
            printf("%d ", j);
        }
        printf("\n");
    }


    return 0;
}
