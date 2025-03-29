//Creat a function void pointer
//give the value of a variable to the pointer
//print the address of the pointer
//the value of the variable
//and the value stored in the pointer
#include <stdio.h>

void pointer()
{
	int var = 10;
	int* ptr;
	ptr = &var;


	printf("Value at ptr = %p \n", ptr);//the address
	printf("Value at var = %d \n", var);//the value
	printf("Value at *ptr = %d \n", *ptr);//the value stored 
}

int main()
{
	pointer();
	return 0;
}

