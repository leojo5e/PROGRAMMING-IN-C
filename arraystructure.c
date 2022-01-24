#include<stdio.h>
struct student 
{
    char name[100];
    int rollno;
    float mark;
};
void main()
{
    struct student s1[3];
    int i;
    printf("Enter the student details\n");
    for(i=0;i<3;i++)
    {
        printf("Enter the name\n");
        getchar();
        gets(s1[i].name);
        printf("Enter the rollno\n");
        scanf("%d",&s1[i].rollno);
        printf("Enter the mark\n");
        scanf("%f",&s1[i].mark);
    }
    printf("Details of student\n");
    printf("Name\tRollno\tMark\n");
    for(i=0;i<3;i++)
    {
        printf("%s\t%d\t%f\n",s1[i].name,s1[i].rollno,s1[i].mark);
    }
}