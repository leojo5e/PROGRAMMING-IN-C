#include<stdio.h>
void main()
{
    int a=5,*ptr;
    char *ptr1,ch="a";
    ptr=&a;
    ptr1=&ch;
    printf("Addres of a is %d\n",&a);
    printf("Addres of ch is %d\n",&ch);
    printf("value of ptr is %d\n",ptr);
    printf("Value of ptr1 is %d\n",ptr1);
    //printf("Value of ++ptr is %d\n",++ptr);
    //printf("Value of --ptr is %d\n",--ptr);
    //printf("Value of ++ptr1 is %d\n",++ptr1);
    //printf("Value of --ptr1 is %d\n",--ptr1);
    //printf("Addition of ptr(5) is %d\n",ptr+5);
    printf("Diff of ptr(5) is %d\n",ptr-5);
    //printf("Addition of ptr1(5) is %d\n",ptr1+5);
    printf("Diff of ptr1(5) is %d\n",ptr1-5);
}