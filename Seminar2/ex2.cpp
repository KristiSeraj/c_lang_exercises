//Create a fixed-value NxM matrix.
//Find the largest value for each row/column. 

#include<stdio.h>
int main()
{
	//declare the variables
	int n=3,m=4,max,i,j;
	//populate the matrix
	int matrix[n][m]={ 
	{1,3,4,70},
	{ 4,6,75,1},
	{54,6,90,11}
	};
	
	//we declare 2 arrays one for max of rows and one for max of columns
	int maxr[n],maxc[m];
	for(i=0;i<n;i++)
	{
		max=matrix[i][0];
		for(j=0;j<m;j++)
		{
			if(max<matrix[i][j])
			{
				max=matrix[i][j];
			}
		
		}
			maxr[i]=max;
	}
	
	for(j=0;j<m;j++)
	{
		max=matrix[0][j];
		for(i=0;i<n;i++)
		{
			if(max<matrix[i][j])
			{
				max=matrix[i][j];
			}
		}
		maxc[j]=max;
	}
	
	//printing the max values per column
	
	for(i=0;i<m;i++)
	{
		printf("%d column is %d \n",i+1,maxc[i]);
	}
	//printing the max values per rrow
		for(i=0;i<n;i++)
	{
		printf("%d rrow is %d \n",i+1,maxr[i]);
	}
}
