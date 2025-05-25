#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int x = 0; x < n; ++x) {
        for (int y = 0; y < n; ++y) {
            if ((x * x + y * y) % n == 0) {
                cout << x << " " << y << endl;
                return 0;
            }
        }
    }
    return 0;
}
