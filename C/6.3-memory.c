#include <stdio.h>
#include <stdlib.h> //required for the memory functions
#include <stdbool.h>
#include <string.h>

/* 
void fun()
{
    int static x = 0;
    x++;
    printf("%d\n", x);
}

int main()
{
    fun();
    fun();
    fun();

    return 0;
}
*/

typedef struct 
{
    char name[30];
    int age;
    bool isVerfied;
} user;

user *createUser(char name[], int age, bool isVerfied)
{
    user *newUser = malloc(sizeof(user));
    strcpy(newUser->name, name);
    newUser->age = age;
    newUser->isVerfied = isVerfied;
    return newUser;
};

int main()
{
    int size;
    printf("How many int elements do you need bro?: ");
    scanf("%d", &size);

    int *arr = malloc(size * sizeof(int));

    if(arr == 0)
    {
        printf("Invalid pointer. Error allocating memory\n");
        return -1;
    } else {
        printf("You're good to go\n");
    }

    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Your array:\n");

    for  (int i = 0; i < size; i++)
    {
        printf("arr[%d] = %d\n", i, arr[i]);
    }
    
    free(arr); //freeing up memory after allocation

    user *me = createUser("Dan Min", 72, false);

    printf("Dan is %d years old!!\n", me->age);

    free(me);

    

    return 0;
}