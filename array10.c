#include<stdio.h>
void main()
{
	int a[3][4],i,j;
	printf("Enter the elements:");
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			scanf("%d",&a[i][j]);
			printf("a[%d][%d]=%d\n",i,j,a[i][j]);
		}
	
	}	
}