#include <iostream>
using namespace std;

class ArrayOperations {
private:
    int arr[5];

public:
    void inputArray() {
        cout << "Enter 5 integers: ";
        for (int i = 0; i < 5; ++i)
            cin >> arr[i];
    }

    void modifyArray() {
        cout << "Incrementing each element by 1...\n";
        for (int i = 0; i < 5; ++i)
            arr[i]++;
    }

    void calculateSumAvg() {
        int sum = 0;
        for (int i = 0; i < 5; ++i)
            sum += arr[i];

        float avg = sum / 5.0f;
        cout << "Sum = " << sum << ", Average = " << avg << endl;
    }

    void displayArray() {
        cout << "Array Elements: ";
        for (int i = 0; i < 5; ++i)
            cout << arr[i] << " ";
        cout << endl;
    }
    
};

int main() {
    ArrayOperations arrOps;

    arrOps.inputArray();
    arrOps.modifyArray();
    arrOps.calculateSumAvg();
    arrOps.displayArray();

    return 0;
}
