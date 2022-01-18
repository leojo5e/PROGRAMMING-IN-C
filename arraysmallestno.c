#include<stdio.h>
void main()
{
    int a[100],n,i,l;
    printf("Enter the size of the array");
    scanf("%d",&n);
    printf("Enter the elements in the array");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    l=a[0];
    for(i=0;i<n;i++)
    {
        if(l>a[i])
        l=a[i];
    }
    printf("The smallest element of the array is %d",l);
}