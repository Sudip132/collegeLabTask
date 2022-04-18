#include <stdio.h>

int main(){
   int salary[2],i,n,count=0;

printf("\n Input salary of 200 persons:-");
for(i=0;i<2;i++)
scanf("%d",&salary[i]);
for(i=0;i<2;i++)
{
if(salary[i]>45000 && salary[i]<75000)
count++;
}
printf("There are %d persons whose salary is in between 45000 and 75000",count);
    return 0;
}