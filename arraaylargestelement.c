// Program to find the largest element of an array

#include<stdio.h>
void main()
{
    int n,i,a[100],l;
    printf("Enter the size of the array");
    scanf("%d",&n);
    printf("Enter the elements");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    l=a[0];
    for(i=0;i<n;i++)
    {
        if(l<a[i])
        l=a[i];
    }
    printf("The largest element of this array is %d",l);
}
