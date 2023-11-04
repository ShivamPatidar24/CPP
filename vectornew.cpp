#include <iostream>
#include <vector>
using namespace std;



int main() {
    std::vector<int> v1;
     
    // bool x =  isVectorSorted(sortedVector);

    v1.push_back(01);
    v1.push_back(81);
    v1.push_back(61);
    v1.push_back(11);
    
    int n = v1.size();
    
    for(int i = 0; i<n;i++)
    {
        cout<<v1[i]<<" ";
    }
    cout<<endl;
    v1.pop_back();
    for(int z:v1)
    {
        cout << z << " ";
    }
    
    sort(v1.begin(), v1.end());
    cout<<endl;
    for(int z:v1)
    {
        cout << z << " ";
    }
    
    return 0;
}

