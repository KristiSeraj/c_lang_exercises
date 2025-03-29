# include <stdio.h>
void fun(int x)
{
    x = 10;
}

int main()
{
  int y=58;
  fun(y);
  printf(" the value of y is: %d", y);
 
}

//Parameters are always passed by value in C. 
//Therefore, in the above code, value of y is not modified 
//using the function fun(). So how do we modify the value of a local variable 
//of a function inside another function. 
//Pointer is the solution to such problems
