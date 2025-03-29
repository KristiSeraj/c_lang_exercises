//creat a variable int , the value of the variable store it 
//in the pointer
//print: the value of the variable
//Value stored in the pointer
//Address of variable var
//Address of pointer


#include <stdio.h>
int main()
{
   int *p;
   int var = 75;
   p= &var;
   printf("Value of variable var is: %d", var);
   printf("\nValue stored in the pointer is: %d", *p);
   printf("\nAddress of variable var is: %p", &var);
   printf("\nAddress of pointer p is: %p", &p);
   return 0;
}
