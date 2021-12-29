/*

1  1  1  1  1
2  2  2  2 
3  3  3
4  4
5

*/

#include<stdio.h>
void main()
{
    int i,j,n;
    printf("Enter the no. of Rows");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=i;j<=n;j++)
        {
            printf("%d\t",i);
        }
        printf("\n");
    }
}