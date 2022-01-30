#include<stdio.h>
void main()
{
    int a[]={10,20,30,40,50},i,*ptr[5];
    for(i=0;i<5;i++)
    {
        ptr[i]=&a[i];
    }
    for(i=0;i<5;i++)
    {
        printf("%d\t",*ptr[i]);
    }
}