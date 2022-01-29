#include<stdio.h>
void main()
{
    int a=10,*ptr,**ptr1;
    ptr=&a;
    ptr1=&ptr;
    printf("Value of a is %d\n",a);
    printf("Value of &a is %d\n",&a);
    printf("Value of ptr is %d\n",ptr);
    printf("Value of &ptr is %d\n",&ptr);
    printf("Value of *ptr is %d\n",*ptr);
    printf("Value of ptr1 is %d\n",ptr1);
    printf("Value of &ptr1 is %d\n",&ptr1);
    printf("Value of *ptr1 is %d\n",*ptr1);
    printf("Value of **ptr is %d",**ptr1);
}