//area of square,circle & rectangle(without argument & without return value)

#include<stdio.h>
void sqr();
void circle();
void rect();
void main()
{
    sqr();
    circle();
    rect();
}
void sqr()
{
    int a,s;
    printf("Enter the side of the square");
    scanf("%d",&a);
    s=a*a*a;
    printf("Area = %d",s);
}
void circle()
{
    float r,a;
    printf("\nEnter the radius of the circle");
    scanf("%f",&r);
    a=3.14*r*r;
    printf("Area = %f",a);
}
void rect()
{
    int l,b,a;
    printf("\nEnter the l & b");
    scanf("%d%d",&l,&b);
    a=l*b;
    printf("Area = %d",a);
}