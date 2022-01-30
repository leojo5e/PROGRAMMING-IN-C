#include<stdio.h>
void main()
{
    int a[]={10,20,30,40,50},i,*ptr,sum=0;
    ptr=&a;
    for(i=0;i<5;i++)
    {
        //sum=sum+*(a+i);
        sum=sum+*(ptr+i);
    }
    printf("The sum = %d",sum);
}