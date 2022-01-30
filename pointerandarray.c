#include<stdio.h>
void main()
{
    int a[]={10,20,30,40,50},i,*ptr;
    ptr=&a;
    for(i=0;i<5;i++)
    {
        //printf("%d\t",*(ptr+i));
        printf("%d\t",*(a+i));
    }
}