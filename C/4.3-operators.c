#include <stdio.h>

int main()
{
    printf("\nforce precedence with ()\n");
    int x = 2 * (3 + 3);
    int y = (2 * 3) + 3;

    printf("x = %d\n", x);
    printf("y = %d\n", y);

    printf("\nModule operators: \n");
    int c = 10 % 3;
    printf("10 %% 3 = %d\n", c);

    printf("Unary minux: \n");
    int a = 5;
    int b = -5;
    printf("b = %d\n", b);
    printf("a = %d\n", a);  //A doesn't change

    printf("Post Increment: \n");
    a = 5;
    b = 5;
    b = a++;
    printf("b = %d\n", b);  //B gets assigned to first
    printf("a = %d\n", a);  //Then A is incremented

    b = 5;
    a = 5;
    b = ++a;
    printf("Pre Increment: \n");
    printf("b = %d\n", b);  //B gets assigned to second
    printf("a = %d\n", a);  //A is incremented first

    // a = a +1; AND a++; AND a += 1;  //All Same thing

    printf("Assignment Operators: \n");
    a = 5;
    b = 5;

    b += a;
    printf("b += a = %d\n", b);  //5 + 5
    a *= 30;
    printf("a *= 30 = %d\n", a);  //5 * 30
    a %= 140; 
    printf("a %%=140 = %d\n", a);  //150 % 140
        
    return 0;
}