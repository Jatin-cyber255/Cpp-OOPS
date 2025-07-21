#include <iostream>
using namespace std;

class VariableInit {
public:
    int a = 10;
    int b = 20;
    int c = 30;
    int d;

    void show() {
        cout << "a = " << a << endl;
        cout << "b = " << b << endl;
        cout << "c = " << c << endl;
        cout << "d (default): " << d << endl;
    }
};

int main() {
    VariableInit obj;
    obj.show();
    return 0;
}