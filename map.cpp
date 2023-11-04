#include<iostream>
#include<map>

using namespace std;

int main()
{
    std::map<int ,std::string> mp;
    mp[4] = "shivam";
    mp[63] = "hjbhjdb";
    mp[8] = "ss";
    mp.insert(22,"patidar");
    
    for(auto i:mp)
    {
        cout << i.first << " ";
    }

    
}
