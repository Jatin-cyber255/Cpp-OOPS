#include <iostream>
#include <climits>
#include <cfloat>
using namespace std;

class DataTypeExplorer {
public:
    void showSizes() {
        cout << "Data Type Size Explorer:\n\n";
        cout << "Sizes (in bytes):\n";
        cout << "char: " << sizeof(char) << "\n";
        cout << "unsigned char: " << sizeof(unsigned char) << "\n";
        cout << "short: " << sizeof(short) << "\n";
        cout << "unsigned short: " << sizeof(unsigned short) << "\n";
        cout << "int: " << sizeof(int) << "\n";
        cout << "unsigned int: " << sizeof(unsigned int) << "\n";
        cout << "long: " << sizeof(long) << "\n";
        cout << "unsigned long: " << sizeof(unsigned long) << "\n";
        cout << "long long: " << sizeof(long long) << "\n";
        cout << "unsigned long long: " << sizeof(unsigned long long) << "\n";
        cout << "float: " << sizeof(float) << "\n";
        cout << "double: " << sizeof(double) << "\n";
        cout << "long double: " << sizeof(long double) << "\n";
        cout << "bool: " << sizeof(bool) << "\n";
    }

    void showRanges() {
        cout << "\nInteger Ranges:\n";
        cout << "Signed int min: " << INT_MIN << ", max: " << INT_MAX << "\n";
        cout << "Unsigned int max: " << UINT_MAX << "\n";
        cout << "Signed short min: " << SHRT_MIN << ", max: " << SHRT_MAX << "\n";
        cout << "Unsigned short max: " << USHRT_MAX << "\n";
        cout << "Signed long min: " << LONG_MIN << ", max: " << LONG_MAX << "\n";
        cout << "Unsigned long max: " << ULONG_MAX << "\n";
        cout << "Signed long long min: " << LLONG_MIN << ", max: " << LLONG_MAX << "\n";
        cout << "Unsigned long long max: " << ULLONG_MAX << "\n";
    }

    void showTypeCasting() {
        cout << "\nType Casting Demonstration:\n";
        int a = 65;
        char ch = (char)a;
        double d = (double)a;
        cout << "int a = " << a << "\n";
        cout << "char ch = (char)a -> " << ch << "\n";
        cout << "double d = (double)a -> " << d << "\n";
        float f = 3.1415;
        int b = (int)f;
        cout << "float f = " << f << "\n";
        cout << "int b = (int)f -> " << b << "\n";
    }
};

int main() {
    DataTypeExplorer obj;
    obj.showSizes();
    obj.showRanges();
    obj.showTypeCasting();
    return 0;
}