#include<stdio.h>
void main()
{
    int a[100],n,i,sum=0;
    printf("Enter the size of the array");
    scanf("%d",&n);
    printf("Enter the elements in the array");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        sum=sum+a[i];

    }
    printf("The sum of the elements in the array are %d",sum);
}