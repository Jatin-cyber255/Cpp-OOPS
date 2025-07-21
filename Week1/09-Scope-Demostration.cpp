#include <iostream>
using namespace std;

class ScopeDemo {
public:
    int x = 5;

    void showScope() {
        int x = 10;
        cout << "Inside function: x = " << x << endl;
        {
            int x = 20;
            cout << "Inside block: x = " << x << endl;
        }
        cout << "Back in function: x = " << x << endl;
    }
};

int main() {
    ScopeDemo obj;
    cout << "In main (class member): x = " << obj.x << endl;
    obj.showScope();
    cout << "Back in main (class member): x = " << obj.x << endl;
    return 0;
}