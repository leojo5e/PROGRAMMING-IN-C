#include<stdio.h>
void binarysearch();
void main()
{
    binarysearch();
}
void binarysearch()
{
    int i,a[100],n,beg,end,item,pos=-1,mid;
    printf("Enter the limit of the array");
    scanf("%d",&n);
    printf("Enter the elements");
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
     printf("Elements are :\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    printf("\nWhich element do you want to search?");
    scanf("%d",&item);
    beg=0;
    end=n-1;
    while(beg<=end)
    {
        mid=(beg+end)/2;
        if(a[mid]==item)
        {
            pos=mid;
            printf("%d is located in position %d\n",item,pos+1);
            break;
        }
        else if(item<a[mid])
        end=mid-1;
        else
        beg=mid+1;
    }
    if(pos==-1)
    printf("%d is not allocated in this array",item);
}