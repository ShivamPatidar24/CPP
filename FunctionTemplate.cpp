#include<iostream>
using namespace std;

template<typename T1, typename T2>
void AddNumbers(T1 num1, T2 num2)
{
    cout << "Num1 + Num2 = " << num1 + num2 << endl;
}


int main()
{
    AddNumbers<int, int>(10, 20);
    AddNumbers<int, float>(20, 20.65f);
    
    return 0;
   
}
