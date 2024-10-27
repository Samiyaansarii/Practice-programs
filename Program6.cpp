#include <iostream>
using namespace std;

class Base {
protected:
    int num1;

public:
  
    void setNum1(int a) {
        num1 = a;
    }
};

class FirstDerived : public Base {
protected:
    int num2;

public:
    
    void setNum2(int b) {
        num2 = b;
    }
};

class SecondDerived : public FirstDerived {
public:
    
    void displaySum() {
        int sum = num1 + num2;
        cout << "Sum of " << num1 << " and " << num2 << " is: " << sum << endl;
    }
};

int main() {
    int a, b;
    cout << "Enter the first number: ";
    cin >> a;
    cout << "Enter the second number: ";
    cin >> b;

    SecondDerived obj;
    obj.setNum1(a);   
    obj.setNum2(b);   
    obj.displaySum();

    return 0;
}
