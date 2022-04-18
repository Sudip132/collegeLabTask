#include <stdio.h>

int main()
{
    int num;
    printf("Enter any number: ");
    scanf("%d", &num);
    
if(num >0){
    printf("The number is  positive = %d", num);

}else if ( num == 0)
{
 printf("The number is Zero = %d", num);
}
 else{
printf("The number is negative = %d", num);
}

    return 0;
}