



#include <iostream>
#include <map>
#include <string>


int main()
{
    std::map<std::string, int>  mp;
    
    mp["shivam"] = 3;
    mp["neetu"] = 5;
    mp["patidar"] = 8;
        std::cout << "Number of apples: " << mp["shivam"] << std::endl;
        for(auto  s:mp)
        {
            std::cout << s.first << ":" <<s.second<<std::endl;
        }
        mp.erase("banana");

    // Check if a key exists in the map
    if (mp.find("banana") == mp.end()) {
        std::cout << "Banana not found in the map." << std::endl;
    }

return 0;
}

