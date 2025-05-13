#include<bits/stdc++.h>
using namespace std;

int main() {
    long long N;  // Use long long to handle large input
    cin >> N;  // Read input

    // Calculate the summation using the formula
    long long sum = (N * (N + 1)) / 2;

    // Output the result
    cout << sum << endl;

    return 0;
}
