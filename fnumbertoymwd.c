// number to year,month,week,days(without argument & without return value)

#include<stdio.h>
void number();
void main()
{
    number();
}
void number()
{
    int n,y,m,w,rem;
    printf("Enter the number");
    scanf("%d",&n);
    y=n/365;
    rem=n%365;
    m=rem/30;
    rem=rem%30;
    w=rem/7;
    rem=rem%7;
    printf("The given number become:\nYear=%d\nMonth=%d\nWeek=%d\nDays=%d",y,m,w,rem);
}