#include <iostream>
using namespace std;

// Interface class
class Shape {
public:
    virtual void draw() = 0; // Pure virtual function
    virtual void resize(int new_size) = 0; // Another pure virtual function
};

// Concrete class Circle implementing the Shape interface
class Circle : public Shape {
public:
    void draw() override {
        cout << "Drawing Circle" << endl;
    }

    void resize(int new_size) override {
        cout << "Resizing Circle to " << new_size << endl;
    }
};

// Concrete class Square implementing the Shape interface
class Square : public Shape {
public:
    void draw() override {
        cout << "Drawing Square" << endl;
    }

    void resize(int new_size) override {
        cout << "Resizing Square to " << new_size << endl;
    }
};

int main() {
    Circle circle;
    circle.draw();
    circle.resize(2);

    Square square;
    square.draw();
    square.resize(3);

    return 0;
}



