#include <iostream>
#define PI_MACRO 3.14159
using namespace std;

const float PI_CONST = 3.14;

class ConstantUsage {
public:
    void showConstants() {
        cout << "Const PI: " << PI_CONST << endl;
        cout << "Macro PI: " << PI_MACRO << endl;
    }
};

int main() {
    cout << "Macro: " << PI_MACRO << endl;
    cout << "Const: " << PI_CONST << endl;

    ConstantUsage obj;
    obj.showConstants();

    return 0;
}


