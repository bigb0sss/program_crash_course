#include <stdio.h>

int main()
{
    //initialization
    //comparison
    //update

    int i = 0;
    while (i < 10)
    {
        printf("%d ", i);
        //code
        i++;
    }

    //do whileloops
    int input;
    do
    {
        /* code */
        printf("Chose a number between 0 and 9: ");
        scanf("%d", &input);
    } while (input < 0 || input > 9);
    

    return 0;
}