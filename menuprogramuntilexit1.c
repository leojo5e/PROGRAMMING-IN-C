/* Program for factorial,prime number & odd or even */

#include<stdio.h>
void main()
{
    int ch,n,i,fact,count;
    while(ch!=4)
    {
        fact=1,count=0;
        printf("\n\n\ns*****MENU*****");
        printf("\nSelect your CHOICE");
        printf("\n1. Factorial of number\n2. Prime or not\n3. Odd or Even\n4. Exit");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:printf("Factorial of number");
                   printf("\nEnter the number");
                   scanf("%d",&n);
                   for(i=n;i>0;i--)
                   {
                        fact=fact*i;
                   }
                   printf("Factorial is %d",fact);
                   break;
            case 2:printf("Prime or not");
                   printf("\nEnter the number");
                   scanf("%d",&n);
                   for(i=1;i<=n;i++)
                   {
                        if(n%i==0)
                        count++;
                   }
                   if(count==2)
                     printf("The number is Prime");
                   else
                     printf("The number is not Prime");
                   break;
            case 3:printf("Odd or Even");
                   printf("\nEnter the number");
                   scanf("%d",&n);
                   if(n%2==0)
                     printf("%d is Even",n);
                   else
                     printf("%d is Odd",n);
                   break;
            case 4:printf("\nExit");
                   break;
        }
    }
}