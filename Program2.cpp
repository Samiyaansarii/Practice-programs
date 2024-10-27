#include <iostream>
using namespace std;

class SwapNumbers {
    int a, b;

public:
    // Parameterized constructor
    SwapNumbers(int x, int y) {
        a = x;
        b = y;
    }

    // Function to swap the numbers
    void swapValues() {
        int temp = a;
        a = b;
        b = temp;
    }

    // Function to display the numbers
    void display() const {
        cout << "a = " << a << ", b = " << b << endl;
    }
};

int main() {
    int num1, num2;

    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;

    // Creating an object and initializing it with num1 and num2
    SwapNumbers swapObj(num1, num2);

    cout << "Before swapping: ";
    swapObj.display();

    // Calling the function to swap the values
    swapObj.swapValues();

    cout << "After swapping: ";
    swapObj.display();

    return 0;
}
