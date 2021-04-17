#include <stdio.h>
#include <string.h>

int main()
{
    printf("What is your name? ");
    char name[20]; // '\0'
    scanf("%19s", name);

    int letter = 0;
    while(name[letter] != '\0')
    {
        letter++;
    }

    printf("Size of name is %d\n", letter);
    
    //StringLength
    printf("Size of name is %lu\n", strlen(name));

    //StringComparison
    if(strcmp(name, "Daniel") == 0)
    {
        printf("You get access!\n");
    } else {
        printf("Access denied!\n");
    }

    //Copy of string
    char copy[20];
    strcpy(copy, name);
    printf("Copy of name is: %s\n", copy);

    //StringConcat
    char lastName[] = " Curry";
    strcat(copy, lastName);
    printf("Full name: %s\n", copy);

    return 0;
}