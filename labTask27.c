#include<stdio.h>
#include <string.h>
int main()
{
    char name[10][8],tname[10][8],temp[10];
	int i,j,n;
   
	printf("enter a number: ");
	scanf("%d",&n);


	for(i=0;i<n;i++)
		{
            printf("Enter you name: \n");
            scanf("%s",name[i]);
            strcpy(tname[i],name[i]);
        }
   for (i = 0; i < n - 1 ; i++)
        {
            for (j = i + 1; j < n; j++)
            {
                if (strcmp(name[i], name[j]) > 0) 
                {
                    strcpy(temp, name[i]);
                    strcpy(name[i], name[j]);
                    strcpy(name[j], temp);
                }
            }
        }
 
        printf("\n----------------------------------------\n");
        printf("Input Names Sorted names\n");
        printf("------------------------------------------\n");
 
        for (i = 0; i < n; i++) 
        {
            printf("%s\t\t%s\n", tname[i], name[i]);
        }
 


    return 0;
}