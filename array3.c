// Program to store n numbers in an array and display the contents in reverse order

#include<stdio.h>
void main()
{
    int n,i,a[100];
    printf("Enter the size of array");
    scanf("%d",&n);
    printf("Enter the elements in the array");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("The entered elements in reverse order:\t");
    for(i=n-1;i>=0;i--)
    {
        printf("%d\t",a[i]);
    }
}