//creat a variable char , the value of the variable store it 
//in the pointer
//print: the value of the variable
//Value stored in the pointer
//Address of variable var
//Address of pointer


#include <stdio.h>
int main()
{
   char *p;
   char var = 'a';
   p= &var;
   printf("Value of variable var is: %c", var);
   printf("\nValue of variable var is: %c", *p);
   printf("\nAddress of variable var is: %p", &var);
   printf("\nAddress of variable var is: %p", p);
   printf("\nAddress of pointer p is: %p", &p);
   return 0;
}
