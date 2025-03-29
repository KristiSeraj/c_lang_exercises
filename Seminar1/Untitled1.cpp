//Populate a matrix 2x2
//print the values 
#include<stdio.h>
int main()
{
//declare the variables
int m[2][2],i,j;
//get the input by the user
for(i=0;i<2;i++)
{
	for(j=0;j<2;j++)
	{
		printf("Enter the value [%d][%d]:",i,j);
		scanf("%d",&m[i][j]);
	}
}	

//print the matrix

for(i=0;i<2;i++)
{
	for(j=0;j<2;j++)
	{
		printf("%d ",m[i][j]);
	}
	printf("\n");
}
	
}

















	

