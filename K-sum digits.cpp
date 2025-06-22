#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    string digits;
    cin >> n >> digits;

    int sum = 0;
    for (char d : digits) {
        sum += d - '0';
    }

    cout << sum << endl;
    return 0;
}
