// find simple intrest using functon(with argument & with retun value)

#include<stdio.h>
float intrest(float,float,float);
void main()
{
    float p,r,t;
    printf("Enter p,r,t");
    scanf("%f%f%f",&p,&r,&t);
    printf("The simple intrest is %f",intrest(p,r,t));
}
float intrest(float x,float y,float z)
{
    return(x*y*z/100);
}