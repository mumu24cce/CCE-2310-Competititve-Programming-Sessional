#include <bits/stdc++.h>
using namespace std;

int main() {
    long long index;
    cin >> index;

    long long a[51];
    a[1] = 0;
    a[2] = 1;

    for (long long i = 3; i <= 50; i++) {
        a[i] = a[i - 1] + a[i - 2];
    }

    cout << a[index] << endl;
    return 0;
}
