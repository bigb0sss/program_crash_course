#include <stdio.h>

int main()
{
    int rows = 3;
    int const columns = 4;

    int studentGrades[][columns] = {
                                    {1, 3, 4, 5},
                                    {3, 2, 4, 5},
                                    {4, 5, 6, 6},
    };

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            printf("%d ", studentGrades[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}