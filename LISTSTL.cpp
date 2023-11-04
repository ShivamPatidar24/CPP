#include<iostream>
#include<list>
using namespace std;
int main()
{
    list<int> l = {4,5,6,1,23,4};
    l.push_back(6);
    l.push_back(9);
    l.push_back(2);
    l.push_back(5);
    l.push_front(24);
    
    auto f = l.begin();
    f++;
    l.insert(f,65);
    
    for(auto x:l)
    {
        cout << x <<" ";
    }
    cout << endl;
    l.pop_front();
    l.pop_back();
    
     for(auto x:l)
    {
        cout << x <<" ";
    }
    cout <<endl;
    l.sort();
    
    for(auto x:l)
    {
        cout << x <<" ";
    }
    cout <<endl;
    l.reverse();
    for(auto x:l)
    {
        cout << x <<" ";
    }
    cout <<endl;
    
    cout << l.size();
    
    list<int> ls = {999,888,777};
    
    l.merge(ls);
        cout <<endl;

    for(auto x:l)
    {
        cout << x <<" ";
    }
}
