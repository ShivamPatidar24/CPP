#include <iostream>
#include <map>
#include <string>

int main() {
    // Creating a multimap of strings and integers
    std::multimap<std::string, int> myMultimap;

    // Inserting elements into the multimap
    myMultimap.insert({"apple", 5});
    myMultimap.insert({"banana", 3});
    myMultimap.insert({"apple", 8});
    myMultimap.insert({"cherry", 4});

    // Iterating through the multimap
    std::cout << "Multimap Elements:" << std::endl;
    for (const auto& elem : myMultimap) {
        std::cout << elem.first << ": " << elem.second << std::endl;
    }

    return 0;
}

