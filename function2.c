//sum of two numbers(with argument & without return value)

#include<stdio.h>
int add(int,int);
void main()
{
    int a,b;
    printf("Enter the numbers");
    scanf("%d%d",&a,&b);
    add(a,b);
}
int add(int x,int y)
{
    printf("The sum is %d",x+y);
}
