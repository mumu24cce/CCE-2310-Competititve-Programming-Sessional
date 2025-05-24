#include <iostream>
using namespace std;

int main() {
    long long n, k, a;
    cin >> n >> k >> a;

    long long result = (n * k);
    if ((result % a) != 0) {
        cout << "double\n";
    } else {
        long long val = result / a;
        if (val >= -2147483648LL && val <= 2147483647LL)
            cout << "int\n";
        else
            cout << "long long\n";
    }

    return 0;
}
