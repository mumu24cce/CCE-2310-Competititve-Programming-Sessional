#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin >> n;
    long long total = 0;
    int a;

    for (int i = 0; i < n; ++i) {
        cin >> a;
        total += a;  // add directly (positive or negative)
    }

    cout << abs(total) << endl;  // take absolute value at the end
    return 0;
}
