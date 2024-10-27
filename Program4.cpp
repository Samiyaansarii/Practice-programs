#include <iostream>
using namespace std;

class Sum {
public:
    Sum(int a, int b) {
        cout << "Sum of two integers: " << a + b << endl;
    }

    Sum(float a, float b) {
        cout << "Sum of two floats: " << a + b << endl;
    }

    Sum(char a, char b) {
        int sum = a + b; 
        cout << "Sum of two characters (ASCII values): " << sum << endl;
    }
};

int main() {
    int int1, int2;
    float float1, float2;
    char char1, char2;
  
    cout << "Enter two integers: ";
    cin >> int1 >> int2;
    Sum sumInt(int1, int2); 

    cout << "Enter two floats: ";
    cin >> float1 >> float2;
    Sum sumFloat(float1, float2);  
    
    cout << "Enter two characters: ";
    cin >> char1 >> char2;
    Sum sumChar(char1, char2);  

    return 0;
}
