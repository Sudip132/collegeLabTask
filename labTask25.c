#include <stdio.h>

int main()
{
    int i, j, rows, columns, a[10][10], Sum;

    printf("Please Enter Number of rows and columns  :  ");
    scanf("%d %d", &rows, &columns);

    printf("Please Enter the Matrix Row and Column Elements \n");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < columns; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for (i = 0; i < rows; i++)
    {
        Sum = 0;
        for (j = 0; j < columns; j++)
        {
            Sum = Sum + a[j][i];
        }
        printf("The Sum of Elements of a columns in a Matrix =  %d \n", Sum);
    }

    return 0;
}