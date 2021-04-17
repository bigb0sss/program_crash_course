#include <stdio.h>
#include <stdbool.h>

int main()
{
    double balance = -5000;
    balance > 0 ? printf("You have money\n") : printf("You have no money\n");

    bool hasMoney;
    hasMoney = balance > 0 ? 1 : 0;
    printf("Has money? 1 is yes 0 is no: %d\n", hasMoney);

    return 0;
}