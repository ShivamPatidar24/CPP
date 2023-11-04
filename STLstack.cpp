#include <iostream>
#include <stack>

int main() {
    // Creating a stack
    std::stack<int> myStack;

    // Pushing elements onto the stack
    myStack.push(5);
    myStack.push(3);
    myStack.push(2);
    myStack.push(8);

    // Printing the top element
    std::cout << "Top element: " << myStack.top() << std::endl;

    // Popping elements from the stack
    myStack.pop();
    std::cout << "Popped one element." << std::endl;

    // Printing the top element after pop
    std::cout << "Top element after pop: " << myStack.top() << std::endl;

    // Checking if the stack is empty
    if (myStack.empty()) {
        std::cout << "Stack is empty." << std::endl;
    } else {
        std::cout << "Stack is not empty." << std::endl;
    }

    // Displaying the size of the stack
    std::cout << "Size of the stack: " << myStack.size() << std::endl;

    return 0;
}

