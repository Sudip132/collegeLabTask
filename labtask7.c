#include <stdio.h>

int main(){
    int num;
    printf("Enter any number: ");
    scanf("%d",&num);
     
     if(num % 5 ==0 && num % 7 !=0){
         printf("The given value is exactly divisible by 5 and not exactly divisible by 7 = %d", num);
     }else{
         printf("the given number is not exactly divisible by 5 = %d",num);
     }
    return 0;
}