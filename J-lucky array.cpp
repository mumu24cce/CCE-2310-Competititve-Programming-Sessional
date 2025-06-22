#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    int mn = INT_MAX;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        mn = min(mn, a[i]);
    }

    int count = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] == mn) count++;
    }

    if (count % 2 == 1) cout << "Lucky\n";
    else cout << "Unlucky\n";

    return 0;
}
