#include <stdio.h>
int main()
{
    char name[20];
    int marks;
    //double marks;
    int i,n;
    printf("Enter number of students: ");
    scanf("%d",&n);
    FILE *fptr;
    fptr=(fopen("H:/Spring 20-21/Compiler/test.txt","a"));
    if(fptr==NULL)
    {
        printf("Error!");
        exit(1);
    }

    for (i=0;i<n;++i)
    {
        printf("\nFor student %d\nEnter name: ",i+1);
        scanf("%s",name);
        printf("Enter marks: ");
        scanf("%d",&marks);
        fprintf(fptr,"\nName: %s \nMarks=%d ",name,marks);
    }
    fclose(fptr);
    printf("\nFile created ");
    return 0;
}
