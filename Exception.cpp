#include <iostream>
using namespace std;

int main() {
    int a = 10, b = 0;

    try {
        if (b == 0) {
            throw b;
        }

        cout << a / b;
    }
    catch (int b) {
        cout << "Division by zero!" << endl << b;
    }

    return 0;
}
