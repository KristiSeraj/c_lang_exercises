//declare a matrix 3x2 
//get the values by user input
//find the maxium value
#include<stdio.h>
int main()
{
	int i,j,m[3][2];
	for(i=0;i<3;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("Enter value:");
			scanf("%d",&m[i][j]);
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d ",m[i][j]);
			
		}
		printf("\n");
	}
	int max;
	max=m[0][0];
	for(i=0;i<3;i++)
	{
		for(j=0;j<2;j++)
		{
			if(max>m[i][j])	
			{
				max=m[i][j];
			}
		}
	}
	
	printf("Max:%d",max);
}
