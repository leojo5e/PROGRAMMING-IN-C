/* Program for to find Palindrome,Amstrong & Fibonacci series*/
#include<stdio.h>
void main()
{
    int i,ch,n,r,sum,a,b,c,temp;
    while(ch!=4)
    {
        sum=0,a=0,b=1;
        printf("\n\n\n*****MENU*****\nEnter your choice");
        printf("\n1. Number is Palindrome or not\n2. Number is Amstrong or not\n3. Find Fibonacci series\n4. Exit");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:printf("Number is Palindrome or not");
                   printf("\nEnter the number");
                   scanf("%d",&n);
                   temp=n;
                   while(n>0)
                   {
                       r=n%10;
                       sum=sum*10+r;
                       n=n/10;
                   }
                   if(sum==temp)
                   printf("The number is Palindrome");
                   else
                   printf("The number is not Palindrome");
                   break;
            case 2:printf("Number is Amstrong or not\nEnter the number");
                   scanf("%d",&n);
                   temp=n;
                   while(n>0)
                   {
                       r=n%10;
                       sum=sum+r*r*r;
                       n=n/10;
                   }
                   if(sum==temp)
                   printf("The number is Amstrong");
                   else
                   printf("The number is not Amstrong");
                   break;
            case 3:printf("Find Fibonacci series\nEnter the limit");
                   scanf("%d",&n);
                   for(i=n;i>0;i--)
                   {
                       printf("\t\t%d",a);
                       c=a+b;
                       a=b;
                       b=c;
                   }
            case 4:printf("\nExit");
                   break;
             
        }
    }
}