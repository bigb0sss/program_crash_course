#include <stdio.h>

int main()
{
    printf("Hello bigb0ss\n");

    int x = 50;  //variables
    int y;  //declaration
    y = 30;  //initialization

    printf("%s bigb0ss\n", "Hello");

    printf("The value of x is %d\n", x);
    
    printf("X: %d, Y: %d\n", x, y);

    printf("Give me a radius: ");
    int radius;
    scanf("%d", &radius);  //address-of-operator (pointer)

    printf("You chose the valud %d\n", radius);

    //string

    printf("What is your name: ");

    char name[20];  //char array of 20 characters. '\0' takes one spot at the end of the array
    scanf("%19s", name);

    printf("Your name: %s\n", name);

    return 0;
}
