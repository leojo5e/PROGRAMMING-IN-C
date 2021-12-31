#include<stdio.h>
void main()
{
    int n,i,a=0,b=1,c;
    printf("Enter the limit");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("%d\t",a);
        c=a+b;
        a=b;
        b=c;
    }
}