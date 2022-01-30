#include<stdio.h>
#include<stdlib.h>
void main()
{
    int *ptr,i,n,sum=0;
    printf("Enter the no.of elements");
    scanf("%d",&n);
    ptr=(int*)calloc(n,sizeof(int));
    printf("Enter the elements");
    for(i=0;i<n;i++)
    {
        scanf("%d",ptr+i);
        sum=sum+*(ptr+i);
    }
    printf("Sum=%d",sum);
}