
#include <iostream>
#include <vector>

int main() {
    // Creating a vector
    std::vector<int> vec;

    // Adding elements to the vector
    vec.push_back(3);
    vec.push_back(1);
    vec.push_back(4);
    vec.push_back(1);
    vec.push_back(5);
    vec.push_back(9);

    // Displaying the elements of the vector
    std::cout << "Vector elements: ";
    for (int i = 0; i < vec.size(); i++) {
        std::cout << vec[i] << " ";
    }
    std::cout << std::endl;

    // Accessing a particular element of the vector
    std::cout << "Element at index 2: " << vec[2] << std::endl;

    // Modifying a specific element
    vec[1] = 10;
    std::cout << "Modified vector elements: ";
    for (int i = 0; i < vec.size(); i++) {
        std::cout << vec[i] << " ";
    }
    std::cout << std::endl;

    // Sorting the vector
    std::sort(vec.begin(), vec.end());
    std::cout << "Sorted vector elements: ";
    for (int i = 0; i < vec.size(); i++) {
        std::cout << vec[i] << " ";
    }
    std::cout << std::endl;

    // Reversing the vector
    std::reverse(vec.begin(), vec.end());
    std::cout << "Reversed vector elements: ";
    for (int i = 0; i < vec.size(); i++) {
        std::cout << vec[i] << " ";
    }
    std::cout << std::endl;

    // Clearing the vector
    vec.clear();
    std::cout << "Vector size after clearing: " << vec.size() << std::endl;

    return 0;
}



