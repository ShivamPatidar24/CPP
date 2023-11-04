#include<iostream>
#include<set>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    set<int> s;
    s.insert(34);
    s.insert(2);
    s.insert(52);
    s.insert(2);
    s.insert(1);
    
    for(int x:s)
    {
        cout << x << " ";
    }
    cout << endl;
    if(s.find(52)!=s.end())
    {
        cout << "element found"<<endl;
    }
    else
    {
        cout << "not";
    }
    s.erase(52);
    for(int x:s)
    {
    	
        cout << x << " ";
    }
    cout << endl;
    std::vector<int> v(s.begin(), s.end());
    
    reverse(v.begin(), v.end());
    for(int x:v)
    {
        cout << x << " ";
    }
    
    
}
