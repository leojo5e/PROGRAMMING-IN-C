#include<stdio.h>
void main()
{
    int n,r,temp,sum=0;
    printf("Enter the number");
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
        r=n%10;
        sum=sum+r*r*r;
        n=n/10;
    }
    if(sum==temp)
    printf("%d is a amstrong number",temp);
    else
    printf("%d is not a amstrong number",temp);
}