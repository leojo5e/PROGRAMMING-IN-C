/*

1  2  3  4  5
2  3  4  5
3  4  5
4  5
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
            printf("%d\t",j);
        }
        printf("\n");
    }
}