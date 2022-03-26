#include<stdio.h>
void create();
void insert();
void delete();
void display();
int a[100],n;
void main()
{
    int ch;
    do
    {
        printf("\nARRAY OPERATIONS\n");
        printf("1.Create\n2.Insert\n3.Delete\n4.Display");
        printf("\nEnter your choice");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:create();
                   break;
            case 2:insert();
                   break;
            case 3:delete();
                   break;
            case 4:display();
                   break;
        }
    }while(ch!=5);
}
void create()
{
    int i;
    printf("Enter the limit of the array");
    scanf("%d",&n);
    printf("Enter the elements");
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Array CREATED");
}
void insert()
{
    int i,pos,item;
    printf("Enter the position");
    scanf("%d",&pos);
    printf("Enter the item");
    scanf("%d",&item);
    i=n;
    while(pos<=i)
    {
        a[i+1]=a[i];
        i--;
    }
    n++;
    a[pos]=item;
    printf("%d is INSERTED",item);
}
void delete()
{
    int i,pos;
    printf("Enter the position");
    scanf("%d",&pos);
    i=pos;
    while (i<=n-1)
    {
        a[i]=a[i+1];
        i++;
    }
    n--;
    printf("DELETED");
}
void display()
{
    int i;
    printf("Elements are :\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
}