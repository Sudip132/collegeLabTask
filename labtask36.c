#include <stdio.h>
#include<string.h>
struct employee
{
    int id;
    char name[30];
    char designation[50];
    float salary;
};

int main(){
    int n,i;
    struct employee emp[20];
    printf("Enter no of employee");
    scanf("%d", &n);
    printf("\n Enter details");
   printf("Enter %d employee details\n",n);
   for(i=0;i<n;i++){
       printf("\nEnter person %d\n id",i+1);
       scanf("%d",&emp[i].id);
       printf("\nEnter name: ");
       scanf("%s",&emp[i].name);
       printf("\nEnter designation: ");
       scanf("%s", &emp[i].designation);
       printf("Enter salary: ");
       scanf("%f",&emp[i].salary);
   }

   printf("\nEmployee information\n");
   for(i=0;i<n;i++){
       printf("\nPerson %d\nid: %s",i+1,emp[i].name);
       printf("\nPerson %d\nname: %s",emp[i].name);
       printf("\nPerson %d\ndesignation: %s",emp[i].designation);
       printf("\nPerson %d\nsalary: %s",emp[i].salary);

   }
    return 0;
}