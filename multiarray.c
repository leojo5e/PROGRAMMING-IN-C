#include<stdio.h>
void main()
{
    int a[100][100],i,j,m,n;
    printf("Enter the no.of Rows and Enter the no.of Cols");
    scanf("%d%d",&m,&n);
    printf("Enter the elements");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        } 
    }
    printf("MATRIX:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    
}