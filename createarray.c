#include<stdio.h>
void create();
void main()
{
     create();
}
void create()
{
    int a[100],n,i=0;
    printf("Enter the limit of the array");
    scanf("%d",&n);
    printf("Enter the elements:");
    while (i<n)
    {
        scanf("%d",&a[i]);
        i++;
    }
    printf("ELEMENTS ARE:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
}