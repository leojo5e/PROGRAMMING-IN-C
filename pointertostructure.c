#include<stdio.h>
typedef struct student
{
    int id;
    char name[20];
    int age;
}stud;
void main()
{
    stud s,*str;
    str=&s;
    printf("Enter the id");
    scanf("%d",&str->id);
    printf("Enter the name");
    scanf("%s",str->name);
    printf("Enter the age");
    scanf("%d",&str->age);
    printf("%d\n",str->id);
    printf("%s\n",str->name);
    printf("%d\n",str->age);
}