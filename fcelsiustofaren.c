// celsius to farenheat and farenheat to celsius(without argument & with return value)

#include<stdio.h>
float ctof();
float ftoc();
void main()
{
    printf("The given celsius to farenheat is %f",ctof());
    printf("The given farenheat to celsius is %f",ftoc());
}
float ctof()
{
    float c;
    printf("Enter the celcius");
    scanf("%f",&c);
    return(1.8*c+32);
}
float ftoc()
{
    float f;
    printf("\nEnter the farenheat");
    scanf("%f",&f);
    return(f-32/1.8);
}