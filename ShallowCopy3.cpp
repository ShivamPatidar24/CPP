#include <iostream>

class Shallow {
public:
    int *data;

    // Shallow copy constructor
    Shallow(const Shallow &source) : data(source.data) {}
};

int main() {
    Shallow source;
    source.data = new int;
    *source.data = 5;

    Shallow copy = source;

    std::cout << *source.data << std::endl; // Output: 5
    std::cout << *copy.data << std::endl; // Output: 5

    *copy.data = 10;

    std::cout << *source.data << std::endl; // Output: 10
    std::cout << *copy.data << std::endl; // Output: 10

    delete source.data;

    return 0;
}

