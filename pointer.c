#include<stdio.h>
void main()
{
    int a=10,*ptr;
    ptr=&a;
    printf("Value of a is %d\n",a);
    printf("Value of &a is %d\n",&a);
    printf("Value of ptr is %d\n",ptr);
    printf("Value of &ptr is %d\n",&ptr);
    printf("Value of *ptr is %d",*ptr);
}