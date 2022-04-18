#include <stdio.h>

int main(){
    int i,j ,mat1[10][10], mat2[10][10],row,col, sum[20][20];
    
    printf("Enter no of rows and columns\n");
    scanf("%d %d",&row,&col);

    printf("Enter the element of first matrix row and col: \n");
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            scanf("%d", &mat1[i][j]);
        }
    }
    printf("Enter the element of second matrix row and col: \n");
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            scanf("%d", &mat2[i][j]);
        }
    }
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
          sum[i][j]= mat1[i][j]+mat2[i][j];
        }
    }
    printf("The sum of two matrix is \n");
 for (i = 0; i < row; ++i)
    for (j = 0; j < col; ++j) {
      printf("%d   ", sum[i][j]);
      if (j == col - 1) {
        printf("\n\n");
      }
    }
    return 0;
}