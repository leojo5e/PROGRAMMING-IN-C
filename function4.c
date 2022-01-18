//sum of two numbers(without argument & with return value)
#include<stdio.h>
int add();
void main()
{
    printf("sum = %d",add());
}
int add()
{
    int a,b;
    printf("Enter the numbers");
    scanf("%d%d",&a,&b);
    return(a+b);
}