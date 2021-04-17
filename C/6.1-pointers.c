#include <stdio.h>

void square(int *input)
{
    *input *= *input;
}

void sizeExample(int ages[])
{
    printf("memory size of ages = %lu\n", sizeof(ages));    
}

int main()
{
    int a = 100;
    int *b = &a;  //b is the pointer and it stores the location of a; * = indirection operator

    printf("a = %d\n", a);
    printf("*b = %d\n", *b);

    a = 200;

    printf("a = %d\n", a);
    printf("*b = %d\n", *b);

    *b = 300;

    printf("a = %d\n", a);
    printf("*b = %d\n", *b);

    int c = 6000;
    b = &c;

    a = 4000;

    printf("a = %d\n", a);
    printf("*b = %d\n", *b);

    int x = 5;
    square(&x);
    printf("%d\n", x);

    int size = 6;
    int ages[] = {2, 43, 63000, 23, 05, 53};
    
    printf("memory size of ages = %lu\n", sizeof(ages));
    
    sizeExample(ages);


    return 0;
}
