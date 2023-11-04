#include <iostream>
#include <array>
#include <algorithm>

int main() {
    // Creating and initializing an std::array
    std::array<int, 5> myArray = {145, 22, 12, 34, 25};

    // Accessing elements of the std::array
    std::cout << "Elements of the array: ";
    for (int i = 0; i < myArray.size(); i++) {
        std::cout << myArray[i] << " ";
    }
    std::cout << std::endl;

    // Accessing a specific element of the std::array
    std::cout << "Element at index 2: " << myArray[2] << std::endl;

    // Modifying a specific element of the std::array
    myArray[1] = 10;
    std::cout << "Modified array: ";
    for (int i = 0; i < myArray.size(); i++) {
        std::cout << myArray[i] << " ";
    }
    std::cout << std::endl;

    // Sorting the std::array
    std::sort(myArray.begin(), myArray.end());
    std::cout << "Sorted array: ";
    for (int i = 0; i < myArray.size(); i++) {
        std::cout << myArray[i] << " ";
    }
    std::cout << std::endl;

    // Reversing the std::array
    std::reverse(myArray.begin(), myArray.end());
    std::cout << "Reversed array: ";
    for (int i = 0; i < myArray.size(); i++) {
        std::cout << myArray[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}

