//sum of two numbers(with argument & with return value)

#include<stdio.h>
int add(int,int);
void main()
{
    int a,b;
    printf("Enter the numbers");
    scanf("%d%d",&a,&b);
    printf("%d",add(a,b));
}
int add(int x,int y)
{
    return(x+y);
}