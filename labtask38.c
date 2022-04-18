#include <stdio.h>
#include <conio.h>
int main(){
    struct student{
       int sno;
       char name[50];
       int marks;
    };
    struct student st;
    FILE *fp;
    fp=fopen("student.txt",'w+');
    int i,n;
    printf("How many student are there: ");
    scanf("%d", &n);
    for(i=0;i<n;i++){
        printf("\n Enter  symbolNo,name and Marks of student: ");
        scanf("%s,%d,%d",&st.sno,st.name,st.marks);
        fwrite(&st,sizeof(st),1,fp);

    }
    rewind(fp);
    printf("\nSystemNo\tname\tMarks");
    while(fread(&st,sizeof(st),1,fp)==1){
        printf("\n%d\t%s\t%d",st.sno,st.name,st.marks);
    }
    fclose(fp);
    return 0;
}