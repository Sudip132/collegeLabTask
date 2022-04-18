#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
char name[5][10],temp[10];
int i,j,n,age[30],salary[30],id[30];
printf("Enter no of employee: ");
scanf("%d",&n);
for(i=0;i<n;i++)
{
    printf("input the id of student:");
scanf("%d",&id[i]);
printf("input the name of student:");
scanf("%s",&name[i]);
 printf("input the age of student:");
scanf("%d",&age[i]);
 printf("input the salary of student:");
scanf("%d",&salary[i]);
}
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(strcmp(name[i],name[j])>0)
{
strcpy(temp,name[i]);
strcpy(name[i],name[j]);
strcpy(name[j],temp);
}
}
}
printf("\n Name in alphabetical order\n");
for(i=0;i<n;i++)
{
printf("%d\t",id[i]);
printf("%s\t",name[i]);
printf("%d\t",age[i]);
printf("%d\t",salary[i]);
printf("\n");

}
return 0;
}