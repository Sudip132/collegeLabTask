#include <stdio.h>

int main(){
    int num [3];
    for(int i=0;i<3;i++){
    printf("Enter any  number: ");
        scanf("%d",&num[i]);
    }
    printf("Middle number is %d", num[1]);
    return 0;
}