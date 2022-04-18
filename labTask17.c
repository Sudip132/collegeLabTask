#include <stdio.h>
int oddEven();
int sum();
int palindrome();
int main(){
    int option=0;
    printf("enter 1 to check odd or even number\n enter 2 to fond sum of first n natural number\n enter 3 to check palindrome or not\n");
     scanf("%d",&option);
    switch (option)
    {
    case 1:
        oddEven();
        break;
    case 2:
     sum();
        break;
case 3:
 palindrome();
    default:
        break;
    }

     
    return 0;
}
int sum(){
   int n, i, sum = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    for (i = 1; i <= n; ++i) {
        sum += i;
    }

    printf("Sum = %d", sum);
 
}
int  palindrome(){
     int n, reversed = 0, remainder, original;
    printf("Enter an integer: ");
    scanf("%d", &n);
    original = n;

    // reversed integer is stored in reversed variable
    while (n != 0) {
        remainder = n % 10;
        reversed = reversed * 10 + remainder;
        n /= 10;
    }

    // palindrome if orignal and reversed are equal
    if (original == reversed)
        printf("%d is a palindrome.", original);
    else
        printf("%d is not a palindrome.", original);

    
}
int oddEven(){
    int num,result;
     printf("enter any natural number: ");
     scanf("%d",&num);
     if(num >1){
        result=num %2 ;
     }else{
         printf("Entered number either negative or 0");
     }
     
     if(result == 0){
         printf("%d is even number", num);
     }else{
         printf("%d is odd number", num);

     }
}