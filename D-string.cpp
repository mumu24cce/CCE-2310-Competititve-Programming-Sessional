#include <iostream>
using namespace std;

int main() {
    string a, b;
    cin >> a >> b;

    // Sizes
    cout << a.size() << " " << b.size() << endl;

    // Concatenation
    cout << a + b << endl;

    // Swapping first characters
    swap(a[0], b[0]);
    cout << a << " " << b << endl;

    return 0;
}
