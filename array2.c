//Program to store n number in an array and display the contents of a array

#include<stdio.h>
void main()
{
    int a[100],i,n;
    printf("Enter the size of the array");
    scanf("%d",&n);
    printf("Enter the elements of an array");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("The elements are\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    
}