#include <stdio.h>

int main(){
    int mat[10][10];
    int i,j,row,col,sum=0;
    printf("Enter the number of row and column for 1st matrix ");
    scanf("%d%d",&row,&col);
    printf("enter the element of the matrix\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            scanf("%d",&mat[i][j]);
        }
    }
    printf("the matrix\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("%d\t",mat[i][j]);

        }
        printf("\n");
    }
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++){
            if(i==j)
            {
                sum=sum+mat[i][j];
            }
        }
    }
     printf("The sum of diagonal elements of a 3 x 3 matrix = %d\n",sum);

    return 0;
}