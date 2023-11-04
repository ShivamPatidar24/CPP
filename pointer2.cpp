#include <iostream>  
using namespace std;  
int main()  
{  
//  void *ptr;  
  int *p; // void pointer declaration  
  int a=9; 
    // integer variable initialization  
  p=&a;
//  p=(int *)ptr;   // storing the address of 'a' variable in a void pointer variable.  
  std::cout << &a << std::endl;  
  std::cout << p << std::endl;  
  return 0;  
}  
