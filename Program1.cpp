#include <iostream>
using namespace std;

class SumOfNaturalNumbers {
    int n;
    int sum;

public:
    // Default constructor
    SumOfNaturalNumbers() {
        cout << "Enter the value of n: ";
        cin >> n;
        sum = 0;

        // Calculate sum of first n natural numbers
        for (int i = 1; i <= n; i++) {
            sum += i;
        }
    }

    // Function to display the sum
    void displaySum() const {
        cout << "Sum of first " << n << " natural numbers is: " << sum << endl;
    }
};

int main() {
    SumOfNaturalNumbers sumObj;  // Creating an object which calls the default constructor
    sumObj.displaySum();         // Display the sum

    return 0;
}
