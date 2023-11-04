#include<iostream>

int main(){
    int num1 = 5;
    const int num2 = 10;
    
    // Constant pointer to an integer
    
    int* const p1 = &num1;
    
    // Pointer to a constant integer
    
    const int* p2 = &num2;

    
    // Trying to modify the value via p1
    
           *p1 = 6;
           
    // This is allowed, num1 is now 6

    // Trying to modify the value via p2
    
    //   *p2 = 11;
    // This will result in a compilation error since num2 is a constant value

    // Trying to change where p1 points
    // p1 = &num2; 
    // This will result in a compilation error since p1 is a constant pointer

    // Trying to change where p2 points
    p2 = &num1;  
    // This is allowed, p2 now points to num1
    std::cout<<*p2; 

    return 0;
}

