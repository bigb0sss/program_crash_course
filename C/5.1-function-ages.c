#include <stdio.h>

int oldestValue(int ages[], int size)
{
    int largest = ages[0];
    for(int i = 1; i < size; i++)
    {
        if(ages[i] > largest)
        {
            largest = ages[i];
        }
        
    }
    return largest;
}

int main()
{
    int size = 7;
    int ages[] = {1, 2, 54, 23, 12, 66, 12};
    printf("%d\n", oldestValue(ages, size));
    return 0;
}