#include <stdio.h>
#include <stdbool.h>

// C is case-sensitive

int main()
{
    int a = 10;  //statically-tpye language
    double b = 10.5;  //64-bit number
    printf("%lu\n", sizeof(b));  //8 bytes = 64 bits
    
    float c = 10.5;  //32-bit number
    printf("%lu\n", sizeof(c));  //4 bytes = 32 bits

    char d = 'a';
    char e[] = "char array"; // aka a string
    bool f = false;

    // Implicit Type Conversion
    // int zero = .9999999;
    // printf("Zero is %d\n", zero);

    // Explicit Type Conversion
    int slices = 17;
    int people = 2;

    double slicesPerPerson = (double) slices /* 17.0 */ / people; // 8.5000
    printf("%lf\n", slicesPerPerson);

    double test1 = 25 / 2 * 2;  //24.0
    double test2 = 25 / 2 * 2.0;  //24.0
    double test3 = 25.0 / 2 * 2;  //25.0
    double test4 = (double) 25 / 2 * 2;  //25.0
    printf("test1: %f\n", test1);
    printf("test2: %f\n", test2);
    printf("test3: %f\n", test3);
    printf("test4: %f\n", test4);

    return 0;
}