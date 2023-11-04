#include <iostream>  
using namespace std;  
int main()  
{  
    int k;  
    int *p;  
    p=&k;  
    cout<<"The memory address of p variable is :"<<&p;  
    cout<<"\nThe memory address of k variable is :"<<&k;  
    return 0;  
}  
