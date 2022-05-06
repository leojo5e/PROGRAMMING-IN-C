#include<stdio.h>
#define max 3
int queue[max],front=-1,rear=-1;
void insert();
void display();
void delete();
void main()
{
    int ch;
    do
    {
        printf("\n****MAIN MENU****");
        printf("\n1.INSERT\n2.DISPLAY\n3.DELETE\n4.EXIT\nEnter your choice:");
        scanf("%d",&ch);
        switch (ch)
        {
            case 1:insert();
                   break;
            case 2:display();
                   break;
            case 3:delete();
                   break;
        }
    }while (ch!=4);   
}
void insert()
{
    int item;
    if(front==0 && rear==max-1)
    {
        printf("OVERFLOW");
    }
    else
    {
        printf("Enter the element");
        scanf("%d",&item);
        if(front==-1 && rear==-1)
        {
            front=0;
            rear=0;
        }
        else if(front!=0 && rear==max-1)
        {
            rear=0;
        }
        else
        {
            rear++;
        }
        queue[rear]=item;
    }
}
void delete()
{
    int val;
    if(front==-1)
    {
        printf("UNDERFLOW");
    }
    else
    {
        val=queue[front];
        if(front==rear)
            front=rear=-1;
        else if(front==max-1)
            front=0;
        else
        {
            front++;
            printf("The deleted item is %d",val);
        } 
    }
}
void display()
{
    int i;
    if(front==-1 && rear==-1)
    {
        printf("QUEUE IS EMPTY");   
    }
    else
    {
        printf("**QUEUE**\n");
        if(front<rear)
        for(i=front;i<=rear;i++)
        {
            printf("%d\t",queue[i]);
        }
        else
        {
            for(i=front;i<=max-1;i++)
            {
                printf("%d\t",queue[i]);
            }
            for(i=0;i<=rear;i++)
            {
                printf("%d\t",queue[i]);
            }   
        }
    }
}