#include<iostream>
using std::cout, std::endl;

template <typename T>
class Number
{
    T num;
    
    public:
    
    Number(T num) : num(num) {}
    
    T GetValue()
    {
        return num;
    }
};


int main()
{
    Number<int> obj1(10);
    Number<float> obj2(2.3);
    cout << "int = " << obj1.GetValue() << " float =  " << obj2.GetValue() << endl; 
    return 0;
   
}
