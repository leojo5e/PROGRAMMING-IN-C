// swapping of two no.s using funtion(with argument & without return value)

#include<stdio.h>
void swap(int,int);
void main()
{
    int a,b;
    printf("Enter the 1st number and 2nd number");
    scanf("%d%d",&a,&b);
    swap(a,b);
}
void swap(int x,int y)
{
    int temp;
    temp=x;
    x=y;
    y=temp;
    printf("Before swapping 1st number is %d & 2nd number is %d",y,x);
    printf("\nAfter swapping 1st number is %d & 2nd number is %d",x,y);
}