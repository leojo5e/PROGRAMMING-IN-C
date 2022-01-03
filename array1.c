/* Program to read an array of 5 elements from the user and display its elements */

#include<stdio.h>
void main()
{
    int a[5],i;
    printf("Enter the elements in the array");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("The elements are\t");
    for(i=0;i<5;i++)
    {
        printf("%d\t",a[i]);
    }
}