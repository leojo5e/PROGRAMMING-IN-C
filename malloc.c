#include<stdio.h>
#include<stdlib.h>
void main()
{
    int *ptr,i,n;
    printf("Enter the no.of elements");
    scanf("%d",&n);
    ptr=(int*)malloc(n*sizeof(int));
    printf("Enter the elements");
    for(i=0;i<n;i++)
    {
        scanf("%d",ptr+i);
    }
    printf("The elements are\n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",*(ptr+i));
    }
}