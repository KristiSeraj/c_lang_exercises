# include <stdio.h>
void fun(int *ptr)
{
    *ptr = 25;
}

int main()
{
  int y = 30;
  fun(&y);
  printf("%d", y);

}
//It modifies the value at the address ptr. The dereference operator * is 
//used to access the value at an address. In the statement ‘*ptr = 25’,
// value at address ptr is changed to 25. The address operator & is 
// used to get the address of a variable of any data type. In the function call
//  statement ‘fun(&y)’,
// address of y is passed so that y can be modified using its address.
