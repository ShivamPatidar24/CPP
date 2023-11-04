#include <iostream>
using namespace std;

class MyClass {
private:
    int secretValue;

public:
    MyClass()
    {
        secretValue = 42;
    }

    // Declaration of friend function
    friend void displaySecretValue(MyClass);
};

// Definition of friend function
void displaySecretValue(MyClass obj) {
    cout << "The secret value is: " << obj.secretValue << endl;
}

int main() {
    MyClass obj;
    displaySecretValue(obj); // Calling the friend function to display the private member

    return 0;
}

