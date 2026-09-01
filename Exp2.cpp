#include <iostream>
using namespace std;
void byValue(int x) {
    x = x + 10;
    cout << "Inside byValue, x = " << x << endl;
}

void byAddress(int *x) {
    *x = *x + 10;
    cout << "Inside byAddress, *x = " << *x << endl;
}

void byReference(int &x) {
    x = x + 10;
    cout << "Inside byReference, x = " << x << endl;
}

int main() {
    int a = 5, b = 5, c = 5;

    cout << "Before byValue, a = " << a << endl;
    byValue(a);
    cout << "After byValue, a = " << a << endl << endl;

    cout << "Before byAddress, b = " << b << endl;
    byAddress(&b);
    cout << "After byAddress, b = " << b << endl << endl;

    cout << "Before byReference, c = " << c << endl;
    byReference(c);
    cout << "After byReference, c = " << c << endl;

    return 0;
}
