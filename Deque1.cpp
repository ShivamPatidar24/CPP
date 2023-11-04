#include <iostream>
#include <deque>

int main() {
    std::deque<int> myDeque;

    myDeque.push_back(5);  // {5}
    myDeque.push_front(1); // {1, 5}
    myDeque.push_back(10); // {1, 5, 10}

    std::cout << "Front element: " << myDeque.front() << std::endl;
    std::cout << "Back element: " << myDeque.back() << std::endl;

    myDeque.pop_front(); // {5, 10}

    std::cout << "Front element after pop: " << myDeque.front() << std::endl;

    std::cout << "Deque size: " << myDeque.size() << std::endl;

    if (myDeque.empty()) {
        std::cout << "Deque is empty." << std::endl;
    } else {
        std::cout << "Deque is not empty." << std::endl;
    }

    return 0;
}

