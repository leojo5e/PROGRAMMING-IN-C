#include<stdio.h>
void main()
{
    int i,j,ar[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};
    printf("Matrix:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("ar[%d][%d]=%d\n",i,j,ar[i][j]);
        }
    }
}