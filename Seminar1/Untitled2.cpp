//1 2 3
//1 2 3
//1 2 3

//print this matrix
//the values are not given
//by the user input nor manually!

#include<stdio.h>
int main()
{
	int i,j,m[3][3];
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			m[i][j]=j+1;
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d ",m[i][j]);
		}
		printf("\n");
	}
}















