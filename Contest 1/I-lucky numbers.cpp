#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a = n / 10, b = n % 10;
    if (b == 0) {
        cout << "NO\n";
    } else if (a % b == 0 || b % a == 0) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }

    return 0;
}
