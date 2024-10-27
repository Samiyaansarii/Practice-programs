#include <iostream>
using namespace std;

class ArraySum {
    int* arr;
    int size;
    int sum;

public:
    ArraySum(int* inputArr, int s) {
        size = s;
        arr = new int[size];
        for (int i = 0; i < size; i++) {
            arr[i] = inputArr[i];
        }
        calculateSum();
    }

    ArraySum(const ArraySum& other) {
        size = other.size;
        arr = new int[size];
        for (int i = 0; i < size; i++) {
            arr[i] = other.arr[i];
        }
        sum = other.sum;
    }

    void calculateSum() {
        sum = 0;
        for (int i = 0; i < size; i++) {
            if (arr[i] > 0) {
                sum += arr[i];
            }
        }
    }

    void displaySum() const {
        cout << "Sum of all positive numbers: " << sum << endl;
    }

    ~ArraySum() {
        delete[] arr;
    }
};

int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int* arr = new int[n];
    cout << "Enter the elements of the array:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    ArraySum originalArray(arr, n);  
    ArraySum copiedArray = originalArray;  

    copiedArray.displaySum();

    delete[] arr;
    return 0;
}
