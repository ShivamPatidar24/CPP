#include<iostream>
#include<vector>
#include<algorithm>

int main()
{
    std::vector<int> v{1,0,1,0,0,0,1,1,1,0,1,0,1};
    
    sort(v.begin(), v.end(), std::greater());
    
    for(auto& i : v)
    {
        std::cout << i << "  " ;
    }
}