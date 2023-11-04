#include <iostream>
#include <vector>

using namespace std;

std::vector<int> sort(std::vector<int> vec)
{
    sort(vec.begin(), vec.end());
    return vec;
}


int main()
{
     vector<int> v =  {324,5,13,55,73,4};
     
     std::vector<int> x = sort(v);
     
     for(int i = 0; i < x.size(); i++)
     {
         cout << x[i] <<" ";
     }
     
     
     
    
}
