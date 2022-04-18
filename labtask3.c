#include <stdio.h>

int main(){
    int A,B ,temp;
    printf("Enter first number: ");
    scanf("%d", &A);
    printf("Enter second number: ");
    scanf("%d",& B);

     temp=A;
     A=B;

     B=temp;
     printf("\n After swapping, first number=%d\n", A);
     printf("After swapping, second number=%d", B);

    
    return 0;
}