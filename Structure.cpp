#include <iostream>
using namespace std;

// Define a struct
struct Rectangle {
    double length;
    double width;

    // Function to calculate the area
    double calculateArea() {
        return length * width;
    }

    // Function to calculate the perimeter
    double calculatePerimeter() {
        return 2 * (length + width);
    }
};

int main() {
    // Create an instance of the struct
    Rectangle rect;
    rect.length = 5.0;
    rect.width = 3.0;

    // Call the functions inside the struct
    double area = rect.calculateArea();
    double perimeter = rect.calculatePerimeter();

    // Print the results
    cout << "Area: " << area << endl;
    cout << "Perimeter: " << perimeter << endl;

    return 0;
}

