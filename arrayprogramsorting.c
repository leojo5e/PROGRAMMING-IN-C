#include<stdio.h>
void main()
{
    int ar[100],i,n,x,flag=1;
    printf("Enter the limit of the array");
    scanf("%d",&n);
    printf("Enter the elements in the array");
    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    printf("Which value do you want to search?");
    scanf("%d",&x);
    for(i=0;i<n;i++)
    {
        if(ar[i]==x)
        {
            printf("%d is located in %dth postion\n",x,i+1);
            flag++;
        }
    }
    if(flag==1)
    printf("%d is not allocated in this array",x);
}