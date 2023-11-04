#include<iostream>
#include<deque>
using namespace std;
int main()
{
    std::deque<int> vec;
    // std::vector<int> last(vec);
    
    vec.push_back(2);
    vec.push_back(4);
    vec.push_back(6);

    vec.push_front(8);
    vec.push_front(10);
for(int i:vec)
    {
        cout<<i<<endl;
    }
    
    // for(int i:vec)
    // {
    //     cout<<i<<endl;
    // }
    
    cout <<"front of arr ::  " << vec.front() <<endl;
        cout <<"back of arr ::  " << vec.back() <<endl;

    
    vec.pop_back();
    //  for(int i:vec)
    // {
    //     cout<<i<<endl;
    // }
     

    
}
